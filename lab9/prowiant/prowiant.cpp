//
// Created by afghan on 09.05.17.
//



#include "prowiant.h"
using namespace std;

void prowiant :: set_alkoholPrec(int value) {
    alkoholPrec = value;
};

int prowiant :: get_alkoholPrec() const {
    return alkoholPrec;
};

void prowiant :: set_name(string value) {
    name = value;
};

string prowiant :: get_name() const {
    return name;
};

//KONSTRUKTORY

woda :: woda() {
    set_alkoholPrec(0);
    set_name("Woda");
};

oranzada :: oranzada() {
    set_alkoholPrec(0);
    set_name("Oranżada");
};

sok :: sok() {
    set_alkoholPrec(0);
    set_name("Sok");
};

piwo :: piwo() {
    set_alkoholPrec(4);
    set_name("Piwo");
};

wino :: wino() {
    set_alkoholPrec(10);
    set_name("Wino");
};

jack_daniels :: jack_daniels() {
    set_alkoholPrec(40);
    set_name("Jacek");
};

vodka :: vodka() {
    set_alkoholPrec(40);
    set_name("Wódka");
};

sliwowica :: sliwowica() {
    set_alkoholPrec(70);
    set_name("Śliwka");
};

