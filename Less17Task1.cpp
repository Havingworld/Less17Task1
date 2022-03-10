/*
Написать функцию, принимающую два указателя на int и меняет местами содержимое данных указателей.
*/

#include <iostream>
using namespace std;

void swap (int* pa, int* pb)
{
    int c = *pb;
    *pb = *pa;
    *pa = c;
}

int main()
{
    int a = 11, b = 22;
    swap(&a, &b);
    cout << a << " " << b;
}


