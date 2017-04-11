//
// Created by kornel on 11.04.17.
//

#include "Point3d.h"

int main()
{
    Point3d a(1,2,3),b(3,4,5);
    Point c(5,6);
    cout<<a.Distance(b)<<endl;
    //cout<<c.Distance(a)<<endl;//W tym przypadku pojawia się błąd, że Point jest nieosiągalny z Point3d
    //cout<<a<<endl; //Operator << nie ma przypisania dla Point3d
}