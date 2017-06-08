//
// Created by kornel on 07.06.17.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H

#include <iostream>
#include <chrono>

using namespace std;

namespace profiling
{
    template <class T>
    auto TimeRecorder(T funkcja);

}

#endif //JIMP_EXERCISES_TIMERECORDER_H
