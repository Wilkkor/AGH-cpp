//
// Created by Jan on 28.02.2017.
//

#include "DoubleBasePalindromes.h"

uint64_t DoubleBasePalindromes(int max_vaule_exculsive)
{
    uint64_t s=0;
    bool r;
    std::string a="";
    for(int i=1;i<max_vaule_exculsive;i++)
    {
        r=1;
        int j=i;
        while(j>0)
        {
            a='0'+a;
            a[0]+=j%10;
            j=j/10;
        }
        for(int k=0,l=a.size()-1;k<l;k++,l--)
        {
            if(a[k]!=a[l])
            {
                r=0;
                break;
            }
        }
        a.clear();
        j=i;
        while(j>0)
        {
            a='0'+a;
            a[0]+=j%2;
            j=j/2;
        }
        for(int k=0,l=a.size()-1;k<l;k++,l--)
        {
            if(a[k]!=a[l]||r==0)
            {
                r=0;
                break;
            }
        }
        a.clear();
        if(r==1)
            s=s+i;
    }
    return s;
}
