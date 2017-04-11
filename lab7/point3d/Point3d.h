//
// Created by kornel on 11.04.17.
//

#ifndef JIMP_EXERCISES_POINT3D_H
#define JIMP_EXERCISES_POINT3D_H

#include <iostream>
#include <cmath>

using namespace std;

class Point {
    friend class Point3d;
public:
    Point();
    Point(double x, double y);
    ~Point();
    double Distance(const Point &other) const;

    double GetX() const;
    double GetY() const;

    void SetX(double x);
    void SetY(double y);
private:
    double x_, y_;
};
std::istream& operator>>(std::istream &is, Point& point);
class Point3d:Point {
private:
    double z_;
public:
    Point3d();
    Point3d(double x, double y,double z);
    ~Point3d();

    double GetZ() const;

    void SetZ(double y);

    double Distance(const Point3d &other);

};


#endif //JIMP_EXERCISES_POINT3D_H
