//
// Created by Jan on 28.02.2017.
//

#include "ReverseString.h"


std::string reverse(std::string str) {
    std::string nowy="";
    for(int i=1;i<str.size();i++)
        nowy=nowy+str[i];
    if(str.size()>1)
        return reverse(nowy)+str[0];
    else
    {
        std::string ret = "";
        ret=ret+str[0];
        return ret;
    }
}
