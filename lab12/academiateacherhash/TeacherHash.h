//
// Created by kornel on 07.06.17.
//

#ifndef JIMP_EXERCISES_TEACHERHASH_H
#define JIMP_EXERCISES_TEACHERHASH_H

#include <iostream>
#include <map>

using namespace std;

namespace academia{
    class TeacherId{
    public:
        int id;
        TeacherId(int liczba);
        operator int() const;
        bool operator!=(TeacherId b) const ;
    };
    class Teacher{
    public:
        TeacherId id;
        string name;
        string department;
        Teacher(TeacherId a,string name,string department);
        int Id();
        string Name();
        string Department();
        bool operator==(Teacher b) const ;
        bool operator!=(Teacher b) const ;
        bool operator<(Teacher b) const ;
    };
    class TeacherHash {
    public:
        map<Teacher,int> hashe;
        TeacherHash();
        size_t operator ()(Teacher a) const;
    };
}


#endif //JIMP_EXERCISES_TEACHERHASH_H
