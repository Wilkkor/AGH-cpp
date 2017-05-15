//
// Created by afghan on 09.05.17.
//

#ifndef JUWENALIA_PROWIANT_H
#define JUWENALIA_PROWIANT_H

#include <iostream>
using namespace std;

class prowiant {
private:
    int alkoholPrec;
    string name;
public:
    void set_alkoholPrec(int);
    int get_alkoholPrec() const;

    void set_name(string);
    string get_name() const;
};

class woda : public prowiant {
private:

public:
    woda();
};

class oranzada : public prowiant {
private:

public:
    oranzada();
};

class sok : public prowiant {
private:

public:
    sok();
};

class piwo : public prowiant {
private:

public:
    piwo();
};

class wino : public prowiant {
private:

public:
    wino();
};

class jack_daniels : public prowiant {
private:

public:
    jack_daniels();
};

class vodka : public prowiant {
private:

public:
    vodka();
};

class sliwowica : public prowiant {
private:

public:
    sliwowica();
};

#endif //JUWENALIA_PROWIANT_H
