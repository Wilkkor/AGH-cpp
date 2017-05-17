//
// Created by afghan on 09.05.17.
//


#include "plecak.h"
#include <algorithm>
using namespace std;

bool plecak :: is_full() {
    return(free_space == 0);
}
bool plecak :: is_empty() {
    return(free_space == 20);
}

void plecak :: pack(prowiant item) {
    if (item.get_alkoholPrec() > 0 && !is_full()) {
        products.emplace_back(item);
        cout<<item.get_name()<<endl;
        free_space --;
    }
}

void plecak :: print_out() {
    for(prowiant base : products)
    {
        cout<<base.get_name()<<"   h   "<<base.get_alkoholPrec()<<endl;
    }
}

void plecak::sorting() {
    struct {
        bool operator()(prowiant a, prowiant b) const
        {
            return a.get_alkoholPrec() < b.get_alkoholPrec();
        }
    } customLess;
    sort(products.begin(),products.end(),customLess);
}

prowiant plecak::unpack() {
    prowiant a=products[0];
    products.erase(products.begin());
    free_space++;
    return a;
}