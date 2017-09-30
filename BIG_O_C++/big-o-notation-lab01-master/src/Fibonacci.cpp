#include "Fibonacci.h"

Fibonacci::Fibonacci()
{
    //ctor
}

Fibonacci::~Fibonacci()
{
    //dtor
}

long Fibonacci::fibonacci1(int n) {
        if (n < 0) {
            throw "N can not be less than zero";
        }
        if (n <= 2) {
            return 1;
        }
        return fibonacci1(n - 1) + fibonacci1(n - 2);
    }
