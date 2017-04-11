//
// Created by kornel on 11.04.17.
//

#include "Krztalt.h"

Krztalt::Krztalt() {}
Trojkat::Trojkat(int a_):a{a_}{}
Kwadrat::Kwadrat(int a_):a{a_} {}
Kolo::Kolo(int r_):r{r_} {}
void Trojkat::rysuj() {
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
void Kolo::rysuj() {
    for(int i=0;i<2*r;i+=2)
    {
        for(int j=0;j<2*r;j++)
        {
            if(sqrt(pow((double)(r-i), 2) + pow((double)(r-j), 2))<=r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Kwadrat::rysuj() {
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
