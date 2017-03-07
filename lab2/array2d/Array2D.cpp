//
// Created by wilkkorn on 07.03.17.
//

#include "Array2d.h"

int **Array2D(int n_rows, int n_columns)
{
    int **tab;
    tab= new int*[n_columns];
    for(int i=0;i<n_columns;i++)
    {
        tab[i]=new int[n_rows];
        for(int j=0;j<n_rows;j++)
        {
            tab[i][j]=i*n_rows+j;
        }
    }
    return tab;
}


void DeleteArray2D(int **array, int n_rows, int n_columns)
{
    for (int i = 0; i < n_columns; ++i)
    {
        delete array[i];
    }
    delete array;
}