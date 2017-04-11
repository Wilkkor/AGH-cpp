//
// Created by kornel on 11.04.17.
//

#ifndef JIMP_EXERCISES_KRZTALT_H
#define JIMP_EXERCISES_KRZTALT_H

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Krztalt {
public:
    Krztalt();
    virtual void rysuj()=0;
};
class Trojkat:public Krztalt{
    int a;
public:
    Trojkat(int a);
    void rysuj();
};
class Kolo:public Krztalt{
    int r;
public:
    Kolo(int r);
    void rysuj();
};
class Kwadrat:public Krztalt{
    int a;
public:
    Kwadrat(int a);
    void rysuj();
};


#endif //JIMP_EXERCISES_KRZTALT_H
