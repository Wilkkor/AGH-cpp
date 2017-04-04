//
// Created by kornel on 04.04.17.
//

#include "StudentRepository.h"

StudyYear StudyYear::operator++()
{
    this->year+=1;
}
StudyYear StudyYear::operator--()
{
    this->year-=1;
}

void StudyYear::setYear(int year) {
    StudyYear::year = year;
}

int StudyYear::getYear() const {
    return year;
}

istream& operator>>(istream & input, StudyYear& p)
{
    int tmp;
    input>>tmp;
    p.setYear(tmp);
    return input;
}
ostream& operator<<(ostream & output, StudyYear& p)
{
    int tmp;
    tmp=p.getYear();
    output<<tmp;
    return output;
}

//void CheckNextChar(char c, istream *is) {
//    int next_char = is.peek();
//    if (next_char != c) {
//        throw runtime_error("invalid character");
//    }
//    is.ignore();
//}
//
//void IgnoreWhitespace(istream *is) {
//    is >> ws;
//}
//
//double ReadNumber(istream *is) {
//    double d;
//    is >> d;
//    return d;
//StudyYear - 2
//Student - Student {id: „2030001234”, first_name: „Arkadiusz”, last_name: „Kowalski”, program: „informatyka”, year: 2}
//StudentRepository - [Student {id: „203000001”,… , Student {id: „…]
void Student::setId(const string &id) {
    Student::id = id;
}

void Student::setFirst_name(const string &first_name) {
    Student::first_name = first_name;
}

void Student::setLast_name(const string &last_name) {
    Student::last_name = last_name;
}

void Student::setProgram(const string &program) {
    Student::program = program;
}

void Student::setYear(const StudyYear &year) {
    Student::year = year;
}
istream& operator>>(ostream & output, Student& p){

}
