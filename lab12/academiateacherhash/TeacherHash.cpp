//
// Created by kornel on 07.06.17.
//

#include "TeacherHash.h"

namespace academia{
    TeacherId::TeacherId(int liczba):id(liczba) {}
    TeacherId::operator int() const {
        return id;
    }
    bool TeacherId::operator!=(TeacherId b) const {
        return id!=b.id;

    }
    Teacher::Teacher(TeacherId a, string name, string department):id(a),name(name),department(department) {}
    int Teacher::Id() {return id.id;}
    string Teacher::Name() {return name;}
    string Teacher::Department() {return department;}
    bool Teacher::operator==(Teacher b) const {return id==b.id&&name==b.name&&department==b.department;}
    bool Teacher::operator!=(Teacher b) const {return !(id==b.id&&name==b.name&&department==b.department);}
    bool Teacher::operator<(Teacher b) const {return id<b.id;}
    TeacherHash::TeacherHash() {}
    size_t TeacherHash::operator ()(Teacher a) const {
        int b,c;
        b=0;
        for(int i=0;i<a.name.size();i++)
            b+=a.name[i];
        for(int i=0;i<a.department.size();i++)
            b+=a.department[i];
        return std::hash<int>()(a.id) * std::hash<int>()(b);
    }
}