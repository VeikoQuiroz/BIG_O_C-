#ifndef FIBONACCI_H
#define FIBONACCI_H



class Fibonacci
{
    public:
        long fibonacciCache[10000];
        Fibonacci();
        virtual ~Fibonacci();
        long fibonacci1(int);
        long fibonacci2(int);
        long fibonacci3(int);
    protected:

    private:
};

#endif // FIBONACCI_H
