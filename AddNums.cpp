// AddNums.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int AddInt(int a , int b)
{
  return (a+b);
}

template<class T>
T AddNums(T a, T b)
{
  return (a+b);
}

