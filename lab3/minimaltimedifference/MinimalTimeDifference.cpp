//
// Created by kornel on 19.03.17.
//

#include <iostream>
#include "MinimalTimeDifference.h"

namespace minimaltimedifference
{
    unsigned int ToMinutes(std::string time_HH_MM)
    {
        regex pattern {R"(^(\d{1,2}):(\d{1,2})$)"};
        smatch match;
        regex_match(time_HH_MM, match, pattern);
        unsigned int h,m;
        stringstream w;
        w<<match[1];
        w>>h;
        w.clear();
        w<<match[2];
        w>>m;
        return 60*h+m;
    }
    unsigned int MinimalTimeDifference(std::vector<std::string> times)
    {
        unsigned int min=1440;
        for (int i = 0; i < times.size(); ++i)
        {
            for (int j = i+1; j < times.size(); ++j)
            {
                if(ToMinutes(times[i])<ToMinutes(times[j])&&ToMinutes(times[j])-ToMinutes(times[i])<min)
                {
                    min=ToMinutes(times[j])-ToMinutes(times[i]);
                }
                if(ToMinutes(times[i])<ToMinutes(times[j])&&1440-(ToMinutes(times[j])-ToMinutes(times[i]))<min)
                {
                    min=1440-(ToMinutes(times[j])-ToMinutes(times[i]));
                }
                if(ToMinutes(times[j])<ToMinutes(times[i])&&ToMinutes(times[i])-ToMinutes(times[j])<min)
                {
                    min=ToMinutes(times[i])-ToMinutes(times[j]);
                }
                if(ToMinutes(times[j])<ToMinutes(times[i])&&1440-(ToMinutes(times[i])-ToMinutes(times[j]))<min)
                {
                    min=1440-(ToMinutes(times[i])-ToMinutes(times[j]));
                }
            }
        }
        return min;
    }
}