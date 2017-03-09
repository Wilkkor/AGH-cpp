//
// Created by kornel on 09.03.17.
//

#include "XorCypherBreaker.h"

std::string XorCypherBreaker(const std::vector<char> &cryptogram, int key_length, const std::vector<string> &dictionary)
{
    char key[key_length];
    vector <string> dopuszcz;
    vector <string> klucz;
    string temp,slowo;
    char w;
    int sumaslow=0,sumawyrazow=0;
    for (int i = 0; i < key_length; ++i) {
        key[i]='a';
    }
    bool r=1;
    while(r==1)
    {
        key[0]+=1;
        sumaslow=0;
        sumawyrazow=0;
        for (int j = 0; j <key_length ; ++j) {
            if(key[j]>'z'&&j+1<key_length)
            {
                key[j+1]++;
                key[j]='a';
            }
        }
        temp.clear();
        for (int k = 0; k < cryptogram.size(); ++k) {
            w=cryptogram[k]^key[k%key_length];
            if(w<='Z'&&w>='A')
            {
                w-='A';
                w+='a';
            }
            temp.push_back(w);
        }
        for (int l = 0; l < temp.size(); ++l) {
            w=temp[l];
            if(temp[l]==32)
            {
                sumawyrazow+=1;
                if (find(dictionary.begin(),dictionary.end(),slowo) != dictionary.end()) {
                    sumaslow+=1;
                }
                slowo.clear();
            }else
            {
                slowo=slowo+w;
            }
        }
        slowo.clear();
        if(sumaslow>2&&sumawyrazow/sumaslow<=4)
        {
            dopuszcz.push_back(temp);
            for (int i = 0; i < key_length; ++i) {
                slowo=slowo+key[i];
            }
            klucz.push_back(slowo);
        }
        r=0;
        for (int i = 0; i < key_length; ++i) {
            if(key[i]!='z')
            {
                r=1;
                break;
            }
        }
    }
    for (int m = 0; m < dopuszcz.size(); ++m) {
        cout<<dopuszcz[m]<<"sdf"<<endl;
        //cout<<klucz[m]<<endl;
    }
    slowo.clear();
    return klucz[0];
}
