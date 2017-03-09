//
// Created by wilkkorn on 07.03.17.
//

#include "Array2D.h"

int **NewArray2D(int n_rows, int n_columns)
{
    if(n_columns<=0||n_rows<=0)
        return NULL;
    int ** tab;
    tab=new int*[n_rows];
    for (int i = 0; i < n_rows; ++i) {
        tab[i]=new int[n_columns];
    }
    for (int j = 0; j < n_rows; ++j) {
        for (int i = 0; i < n_columns; ++i) {
            tab[j][i]=1+j*n_columns+i;
        }
    }
    return tab;
}


void DeleteArray2D(int **array, int n_rows, int n_columns)
{
    for (int i = 0; i < n_rows; ++i)
    {
        delete array[i];
    }
    delete array;
}