#include "Fibonacci.h"

Fibonacci::Fibonacci()
{
    for(int i = 0; i < 10000; i++)
        fibonacciCache[i] = 0;
}

Fibonacci::~Fibonacci()
{
    //dtor
}
//Complexity: O(2^N)
long Fibonacci::fibonacci1(int n) {
        if (n < 0) {
            throw "N can not be less than zero";
        }
        if (n <= 2) {
            return 1;
        }
        return fibonacci1(n - 1) + fibonacci1(n - 2);
    }
// Complexity: O(N)
long Fibonacci::fibonacci2(int n) {
    if (n < 0) {
        throw ("N can not be less than zero");
    }
    if (n <= 2) {
        return 1;
    }
    long fibonacci = 0;
    long previous = 1;
    long penultimate = 0;
    for (int i = 1; i <= n; i++) {
        penultimate = fibonacci;
        fibonacci = previous + fibonacci;
        previous = penultimate;
    }
    return fibonacci;
}

// Complexity: O(N)
long Fibonacci::fibonacci3(int n){
    if (n < 0) {
        throw "N can not be less than zero";
    }
    if (n <= 2) {
        fibonacciCache[n] = 1;
    }
    if (fibonacciCache[n] == 0) {
        fibonacciCache[n] = fibonacci3(n - 1) + fibonacci3(n - 2);
    }
    return fibonacciCache[n];
}

