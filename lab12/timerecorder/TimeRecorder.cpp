//
// Created by kornel on 07.06.17.
//

#include "TimeRecorder.h"

template <class T>
auto profiling::TimeRecorder(T funkcja) {
    auto a=funkcja();
    return make_pair(a,10);
}