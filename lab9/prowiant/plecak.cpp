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
    for(int i=0;i<free_space;i++)
    {
        const prowiant a=products[i];
        cout<<a.get_name<<endl;
    }
};
