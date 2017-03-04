//
// Created by Jan on 28.02.2017.
//
#include <iostream>
#include "Palindrome.h"

int main()
{
    std::string str;

    bool r=1;
    while(r==1)
    {
        std::cout<<"by sprawdzic czy palindrom podaj 1 by wyjsc podaj 0";
        std::cin>>r;
        if(r==1)
        {
            std::cout<<"podaj wyraz";
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
    }


}
