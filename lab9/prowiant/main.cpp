#include <iostream>
#include "plecak.h"

int main() {

    plecak Plecak;
    woda a, b, c, d, e, f;
    Plecak.pack(a);
    Plecak.pack(b);
    Plecak.pack(c);
    Plecak.pack(d);
    Plecak.pack(e);
    Plecak.pack(f);
    Plecak.print_out();

    return 0;
}