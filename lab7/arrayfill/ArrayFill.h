//
// Created by kornel on 10.04.17.
//

#ifndef JIMP_EXERCISES_ARRAYFILL_H
#define JIMP_EXERCISES_ARRAYFILL_H

#include <iostream>
#include <vector>
#include <random>

using namespace std;

namespace arrays
{

    class ArrayFill {
    public:
        virtual int Value(int index) const =0;
    };
    void FillArray(size_t size, const ArrayFill &filler, std::vector<int> *v);
    class IncrementalFill : public ArrayFill {
    public:
        IncrementalFill(int value);
        IncrementalFill(int value,int jump);
        virtual int Value(int index) const override;
    private:
        int value_;
        int jump_;
    };
//    class RandomFill : public ArrayFill {
//    public:
//        virtual int Value(int index) const override;
//        RandomFill(auto generator_,auto distribution_);
//    private:
//        auto generator;
//        auto distribution;
//    };
    class SquaredFill : public ArrayFill {
    public:
        SquaredFill();
        SquaredFill(int a);
        SquaredFill(int a,int b);
        virtual int Value(int index) const override;
    private:
        int a;
        int b;
    };
}

using namespace arrays;
#endif //JIMP_EXERCISES_ARRAYFILL_H
