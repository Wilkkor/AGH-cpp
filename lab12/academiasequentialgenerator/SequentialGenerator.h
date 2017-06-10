//
// Created by kornel on 10.06.17.
//

#ifndef JIMP_EXERCISES_SEQUENTIALGENERATOR_H
#define JIMP_EXERCISES_SEQUENTIALGENERATOR_H

template <class T,class R>
class SequentialIdGenerator {
public:
    R v;
    SequentialIdGenerator():v{0} {}
    SequentialIdGenerator(R val):v{val} {}
    int NextValue() {
        ++v;
        return ((int)v-1);
    }

};


#endif //JIMP_EXERCISES_SEQUENTIALGENERATOR_H
