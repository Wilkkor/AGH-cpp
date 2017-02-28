//
// Created by Jan on 28.02.2017.
//
#include <iostream>
#include "Palindrome.h"

int main()
{
    std::string str;
    std::cin>>str;
    if(is_palindrome(str)==1)
    {
        std::cout<<"tak";
    }
    else
    {
        std::cout<<"nie";
    }
    return 0;
}