//
// Created by kornel on 10.04.17.
//

#include "ArrayFill.h"

namespace arrays
{
    void FillArray(size_t size, const ArrayFill &filler, std::vector<int> *v){
        v->clear();
        v->reserve(size);
        for (size_t i = 0; i < size; i++) {
            v->emplace_back(filler.Value(i));
        }
    }
    IncrementalFill::IncrementalFill(int value) : value_{value},jump_{1}{}
    IncrementalFill::IncrementalFill(int value, int jump):value_{value},jump_{jump} {}
    int IncrementalFill::Value(int index) const {
        return value_+index*jump_;
    }
    SquaredFill::SquaredFill() : a{1},b{0}{}
    SquaredFill::SquaredFill(int a_) : a{a_},b{0}{}
    SquaredFill::SquaredFill(int a_,int b_) : a{a_},b{b_}{}
    int SquaredFill::Value(int index) const {
        return a*index*index+b;
    }
//    RandomFill::RandomFill( generator_, auto distribution_):generator{generator_},distribution{distribution_} {}
//    int RandomFill::Value(int index) const {
//        return 0;
//    }
}
