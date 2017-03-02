//
// Created by Jan on 02.03.2017.
//

#include "MultiplicationTable.h"

int main()
{
    int tab[10][10];
    MultiplicationTable(tab);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<tab[i][j]<<"  ";
        }
        cout<<endl;
    }
}