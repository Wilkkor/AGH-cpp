//
// Created by wilkkorn on 07.03.17.
//

#include "Array2D.h"

int main()
{
    int **tab;
    tab= NewArray2D(5, 7);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    DeleteArray2D(tab,5,7);
    return 0;
}