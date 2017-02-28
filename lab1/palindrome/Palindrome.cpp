//
// Created by Jan on 28.02.2017.
//

#include "Palindrome.h"

bool is_palindrome(std::string str)
{
    bool r=1;
    for(int i=0,j=str.size()-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            r=0;
            break;
        }
    }
    return r;
}