//
// Created by kornel on 14.03.17.
//

#include "TinyUrl.h"

namespace tinyurl
{
    std::unique_ptr<TinyUrlCodec> Init()
    {
        unique_ptr<TinyUrlCodec> p = make_unique<TinyUrlCodec>();
        p->hash={'0','0','0','0','0','0'};
        return p;
    }
    void NextHash(std::array<char, 6> *state)
    {
        int i=5;
        (*state)[i]++;
        while((*state)[i]>'9'&&(*state)[i]<'A'||(*state)[i]>'Z'&&(*state)[i]<'a'||(*state)[i]>'z')
        {
            if((*state)[i]>'z')
            {
                (*state)[i]='0';
                if(i>=1)
                {
                    i--;
                    (*state)[i]++;
                }else
                    break;
                continue;
            }
            if((*state)[i]>'Z')
            {
                (*state)[i]='a';
                continue;
            }
            if((*state)[i]>'9')
            {
                (*state)[i]='A';
                continue;
            }
        }
    }
    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec)
    {
        NextHash(&(*codec)->hash);
        string code;
        for (int i = 0; i < 6; ++i) {
            code=code+__STRING((*codec)->hash[i]);
        }
        (*codec)->code[code]=url;
        return code;
    }
    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash)
    {
        return codec->code[hash];
    }
}
