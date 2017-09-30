#include <iostream>
#include <ctime>
#include "Fibonacci.h"

using namespace std;

class FibonacciClient{
private:
    int N;

public:
    FibonacciClient(int);
    void runFibonacci1();
    void runFibonacci2();
    void runFibonacci3();
    void runFibonacci4();
};

FibonacciClient::FibonacciClient(int n){
    N = n;
}



void FibonacciClient::runFibonacci1(){
    Fibonacci F;
    double duracion;
    clock_t startTime = clock();
    long Rpta = F.fibonacci1(N);
    duracion = ( clock() - startTime ) / (double) CLOCKS_PER_SEC;
    cout<<"O(2^N) N = "<<N<<" -> "<<Rpta<< '\n';
    cout<<"Time elapsed: "<<duracion <<" seconds"<<'\n';
}

void FibonacciClient::runFibonacci2(){
    Fibonacci F;
    double duracion;
    clock_t startTime = clock();
    long Rpta = F.fibonacci2(N);
    duracion = ( clock() - startTime ) / (double) CLOCKS_PER_SEC;
    cout<<"O(N) N = "<<N<<" -> "<<Rpta<< '\n';
    cout<<"Time elapsed: "<<duracion <<" seconds"<<'\n';
}

void FibonacciClient::runFibonacci3(){
    Fibonacci F;
    double duracion;
    clock_t startTime = clock();
    long Rpta = F.fibonacci3(N);
    duracion = ( clock() - startTime ) / (double) CLOCKS_PER_SEC;
    cout<<"O(N) N = "<<N<<" -> "<<Rpta<< '\n';
    cout<<"Time elapsed: "<<duracion <<" seconds"<<'\n';
}


int main()
{
    int n = 40;
    FibonacciClient fibonacciClient(n);
    try{
        fibonacciClient.runFibonacci1();
        fibonacciClient.runFibonacci2();
        fibonacciClient.runFibonacci3();
    }
    catch(int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}
