//
// Created by wilkkorn on 14.03.17.
//

#ifndef JIMP_EXERCISES_CCOUNTER_H
#define JIMP_EXERCISES_CCOUNTER_H
#include <string>
#include <memory>
#include <map>
#include <iostream>
using namespace std;
namespace ccounter{
    struct Counter{
        map<string,int> mapa;
    };
    std::unique_ptr<Counter> Init();
    void Inc(std::string key, std::unique_ptr<Counter> *counter);
    int Counts(const std::unique_ptr<Counter> &counter, std::string key);
    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter);
}
using namespace ccounter;

#endif //JIMP_EXERCISES_CCOUNTER_H
