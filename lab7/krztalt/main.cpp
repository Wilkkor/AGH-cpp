//
// Created by kornel on 11.04.17.
//

#include "Krztalt.h"

int main()
{
    vector<Krztalt*> a;
    int b,c;
    Krztalt * s;
    srand(time(NULL));
    for(int i=0;i<100;i++)
    {
        b=rand()%3;
        c=rand()%50+50;
        if(b==0)
        {
            s=new Kwadrat(c);
            a.push_back(s);
        }
        if(b==1)
        {
            s=new Kolo(c);
            a.push_back(s);
        }
        if(b==2)
        {
            s=new Trojkat(c);
            a.push_back(s);
        }
    }
    for(int i=0;i<100;i++)
    {
        a[i]->rysuj();
    }
}