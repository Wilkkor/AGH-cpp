//
// Created by kornel on 11.04.17.
//

#include "Point3d.h"

int main()
{
    Point3d a(1,2,3),b(3,4,5);
    Point c(5,6);
    cout<<a.Distance(b)<<endl;
    cin>>c;
    cout<<c.GetX()<<" "<<c.GetY()<<endl;
    //cout<<c.Distance(a)<<endl;//W tym przypadku pojawia się błąd, gdyż point nie ma funkcji przyjmującej Point3d ajko argument
    //cout<<a<<endl; //Operator << nie jest przypisany dla Point3d więc kompilator zasygnalizuje error braku przypisania
}