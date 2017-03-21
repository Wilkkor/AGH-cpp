//
// Created by kornel on 21.03.17.
//

#ifndef JIMP_EXERCISES_NAME_H
#define JIMP_EXERCISES_NAME_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Name
{
    vector <string> names;
    string surname;
public:
    Name();
    Name(string all);
    void add_name(string name);
    void set_surname(string last_name);
    string ToFullInitials ();
    string ToFirstNamesInitials ();
    string ToSurnameNames ();
    string ToNamesSurname ();
    bool IsBeforeBySurname(string last_name);
    bool IsBeforeByFirstName(string first_name);

};


#endif //JIMP_EXERCISES_NAME_H
