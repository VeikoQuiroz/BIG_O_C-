#include <iostream>
#include "Fibonacci.h"

using namespace std;
class FibonacciClient{
private:
    int N;

public:
    FibonacciClient(int);
    void runFibonacci1();
};

FibonacciClient::FibonacciClient(int n){
    N = n;
}
void FibonacciClient::runFibonacci1(){
    Fibonacci F;
    long Rpta = F.fibonacci1(N);
    cout<<"N = "<<N<<" -> "<<Rpta;
    }
int main()
{
    int n = 30;
    FibonacciClient fibonacciClient(n);
    try{
        fibonacciClient.runFibonacci1();
    }
    catch(int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}
