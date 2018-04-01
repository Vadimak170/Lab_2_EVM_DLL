#ifndef DINLIB_H
#define DINLIB_H

#include "dinlib_global.h"

class DINLIBSHARED_EXPORT DinLib
{

public:
    DinLib();
    __declspec(dllexport) int summa(int,int);
    __declspec(dllexport) int minus(int,int);
    __declspec(dllexport) int delenie(int,int);
    __declspec(dllexport) int umnozhenie(int,int);
};

#endif // DINLIB_H
