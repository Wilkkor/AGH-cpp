//
// Created by kornel on 04.04.17.
//

#ifndef JIMP_EXERCISES_STUDENTREPOSITORY_H
#define JIMP_EXERCISES_STUDENTREPOSITORY_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;


//id, first_name, last_name, program, year
namespace academia{
    class StudyYear{
        int year;
    public:
        StudyYear operator++();
        StudyYear operator--();

        void setYear(int year);

        int getYear() const;
    };
    class Student {
        string id;
    public:
        void setId(const string &id);

        void setFirst_name(const string &first_name);

        void setLast_name(const string &last_name);

        void setProgram(const string &program);

        void setYear(const StudyYear &year);

    private:
        string first_name;
        string last_name;
        string program;
        StudyYear year;
    public:
    };
    class StudentRepository{
        vector <Student> h;
    };
    istream& operator>>(std::istream &input, StudyYear& point);
    istream& operator>>(istream & input, Student& p);
    istream& operator>>(istream & input, StudentRepository& p);
    ostream& operator<<(std::istream &output, StudyYear& point);
    ostream& operator<<(ostream & output, Student& p);
    ostream& operator<<(ostream & output, StudentRepository& p);
}

using namespace academia;
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
//}
//
//
//// Właściwa definicja, obydwa argumenty funkcji nie
////są zadeklarowane jako const, bo obydwa są modyfikowane
////wewnątrz funkcji (STL nie używa naszej konwencji z przekazywaniem
////przez wskaźnik)
//istream& operator>>(istream & input, Punkt& p){
//    CheckNextChar('(', &input);
//    p.SetX(ReadNumber(&input));
//    CheckNextChar(',', &input);
//    IgnoreWhitespace(&input);
//    p.SetY(ReadNumber(&input));
//    CheckNextChar(')', &input);
//    return input;      // Umożliwia cin >> a >> b >> c;
#endif //JIMP_EXERCISES_STUDENTREPOSITORY_H
