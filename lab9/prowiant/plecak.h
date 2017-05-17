//
// Created by afghan on 09.05.17.
//

#ifndef JUWENALIA_PLECAK_H
#define JUWENALIA_PLECAK_H

#include <iostream>
#include "prowiant.h"
#include <vector>
using namespace std;
class prowiantref {
public:
    prowiantref(prowiant &prowiant) : prowiant_{&prowiant} {}
    //zdefiniowany operator rzutujący na referencję
    //przez co typu można używać jak referencji
    operator prowiant&() {
        return *prowiant_;
    }
private:
    prowiant *prowiant_;
};
class plecak {
private:
    int free_space = 20;
    vector<prowiantref> products;//domyślny refferencewrapper nie chciał przyjąć niekompletnej klasy plecak

public:
    bool is_full();
    bool is_empty();
    void pack(prowiant);
    prowiant unpack();
    void print_out();
    void sorting();
};

#endif //JUWENALIA_PLECAK_H
