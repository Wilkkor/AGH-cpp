//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

long long int factorial(long long int value) {
  long long int s=1;
  if(value<0)
  {
    s=-1;
    for(long long int i=-2;i>value;i--)
        s=s*i;
  }
  else
  {
    for(long long int i=2;i<value;i++)
        s=s*i;
  }
  return s;
}
