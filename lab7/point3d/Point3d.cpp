//
// Created by kornel on 11.04.17.
//

#include "Point3d.h"


Point::Point():x_(0),y_(0){
    cout << "Konstruktor bezparametrowy" << endl;
}

Point::Point(double x, double y){
    cout << "Konstruktor parametrowy" << endl;
    x_ = x;
    y_ = y;
}

Point::~Point(){
    cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
    cout << endl;
}
Point3d::Point3d():Point(0,0),z_(0){
    cout << "Konstruktor bezparametrowy 3d" << endl;
}

Point3d::~Point3d(){
    cout << "Destruktor 3d!";
    cout << endl;
}

double Point::Distance(const Point &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}
Point3d::Point3d(double x, double y,double z) : z_{z},Point(x,y){

    cout << "Konstruktor parametrowy 3d" << endl;
}
double Point3d::Distance(const Point3d &other)
{
    return sqrt((x_-other.x_)*(x_-other.x_)+(y_-other.y_)*(y_-other.y_)+(z_-other.z_)*(z_-other.z_));
}

//get i set

double Point3d::GetZ() const {return z_;}
void Point3d::SetZ(double z){z_=z;}
double Point::GetX() const {return x_;}
double Point::GetY() const {return y_;}
void Point::SetX(double x){x_=x;}
void Point::SetY(double y){y_=y;}

//operator <<
void CheckNextChar(char c, istream* is) {
    int next_char = is->peek();
    if (next_char != c) {
        throw runtime_error("invalid character");
    }
    is->ignore();
}

void IgnoreWhitespace(istream* is) {
    (*is) >> ws;
}

double ReadNumber(istream* is) {
    double d;
    (*is) >> d;
    return d;
}
istream& operator>>(istream & input, Point& p){
    CheckNextChar('(', &input);
    p.SetX(ReadNumber(&input));
    CheckNextChar(',', &input);
    IgnoreWhitespace(&input);
    p.SetY(ReadNumber(&input));
    CheckNextChar(')', &input);
    return input;      // Umożliwia cin >> a >> b >> c;
}