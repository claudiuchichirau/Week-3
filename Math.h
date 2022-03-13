#pragma once

class Math
{
    private:
        int number1;
        int number2;
        int number3;
        double number1;
        double number2;
        double number3;


    public:
        static int Add(int, int);
        static int Add(int, int, int);
        static int Add(double, double);
        static int Add(double, double, double);
        static int Mul(int, int);
        static int Mul(int, int, int);
        static int Mul(double, double);
        static int Mul(double, double, double);
        static int Add(int count, ...); // sums up a list of integers
        static char* Add(const char*, const char*)
}