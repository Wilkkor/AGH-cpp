//
// Created by kornel on 21.03.17.
//


#include "Name.h"
#include <iostream>

int main()
{
    Name czlek("Ja Ty Oni Cucumber");
    string name;
    /*cout<<"podaj nazwisko i imiona"<<endl;
    cin>>name;
    czlek.set_surname(name);
    bool r=1;
    while(r==1){
        cout<<"imie"<<endl;
        cin>>name;
        czlek.add_name(name);
        cout<<"czy dodawac dalej ? (0-nie 1-tak)"<<endl;
        cin>>r;
    }*/
    cout<<czlek.ToFullInitials()<<endl;
    cout<<czlek.ToFirstNamesInitials ()<<endl;
    cout<<czlek.ToSurnameNames ()<<endl;
    cout<<czlek.ToNamesSurname ()<<endl;
    cout<<"podaj nazwisko do porównania"<<endl;
    cin>>name;
    cout<<czlek.IsBeforeBySurname(name)<<endl;
    cout<<"podaj imie do porównania"<<endl;
    cin>>name;
    cout<<czlek.IsBeforeByFirstName(name)<<endl;
}