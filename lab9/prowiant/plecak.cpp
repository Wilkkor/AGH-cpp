//
// Created by afghan on 09.05.17.
//


#include "plecak.h"
using namespace std;

bool plecak :: is_full() {
    return(free_space == 0);
};

void plecak :: pack(prowiant item) {
    if (item.get_alkoholPrec() > 0 && !is_full()) {
        products.emplace_back(item);
        free_space --;
    };
};

void plecak :: print_out() {
    for(prowiant base : products)
    {
        cout<<base.get_name()<<endl;
    }
};
