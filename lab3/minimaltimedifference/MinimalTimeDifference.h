//
// Created by kornel on 19.03.17.
//

#ifndef JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H
#define JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H
#include <vector>
#include <sstream>
#include <regex>
#include <cmath>

using namespace std;
namespace minimaltimedifference
{
    unsigned int ToMinutes(std::string time_HH_MM);
    unsigned int MinimalTimeDifference(std::vector<std::string> times);
}
using namespace minimaltimedifference;
#endif //JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H
