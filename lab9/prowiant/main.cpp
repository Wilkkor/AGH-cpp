#include <iostream>
#include "plecak.h"
#include <cstdlib>

int main() {

    plecak Plecak;
    srand(time(NULL));
    int b;
    for(int i=0;i<20;i++)
    {
        b=rand()%8+1;
        prowiant a;
            if(b==1){
                woda c;
                Plecak.pack(c);
            }
            else if(b==2){
                oranzada c;
                Plecak.pack(c);
            }
            else if(b==3){
                sok c;
                Plecak.pack(c);
            }
             if(b==4){
                piwo c;
                Plecak.pack(c);
            }
            else if(b==5){
                wino c;
                Plecak.pack(c);
            }
            else if(b==6){
                jack_daniels c;
                Plecak.pack(c);
            }
            else if(b==7){
                vodka c;
                Plecak.pack(c);
            }
            else if(b==8){
                sliwowica c;
                Plecak.pack(c);
        }
    }
    Plecak.print_out();// zasem z nieznanych mi przyczyn zamieniają się miejsami np.:sliwowica z wodą
    Plecak.sorting();
    cout<<"sorted"<<endl;
    Plecak.print_out();
    return 0;
}