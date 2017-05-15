//
// Created by afghan on 09.05.17.
//

#ifndef JUWENALIA_PLECAK_H
#define JUWENALIA_PLECAK_H

#include <iostream>
#include "prowiant.h"
#include <vector>
using namespace std;

class plecak {
private:
    int free_space = 20;
    vector<reference_wrapper<const prowiant>> products;

public:
    bool is_full();
    void pack(prowiant);
    void print_out();

};


#endif //JUWENALIA_PLECAK_H
