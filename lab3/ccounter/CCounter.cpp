//
// Created by wilkkorn on 14.03.17.
//

#include "CCounter.h"
namespace ccounter{
    struct Counter{
        map<string,int> mapa;
        int i;
    };
    std::unique_ptr<Counter> Init()
    {
        unique_ptr<Counter> p = make_unique<Counter>();
        return p;
    }
    void Inc(std::string key, std::unique_ptr <Counter> *counter)
    {
        if((*counter)->mapa.find(key)==(*counter)->mapa.end())
        {
            (*counter)->mapa[key]=1;
        }
        else
        {
            (*counter)->mapa[key]++;
        }

    }
    int Counts(const std::unique_ptr<Counter> &counter, std::string key)
    {
        return counter->mapa[key];
    }
    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter)
    {
        (*counter)->mapa[key]=value;
    }
}