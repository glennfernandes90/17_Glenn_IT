Q1. Write a C program to check if a given number is a part of Fibonacci number series

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}
 
// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or
    // both is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
           
}

int main()
{
    for (int i = 1; i <= 10; i++) {
        if (isFibonacci(i))
            printf("%d is a Fibonacci Number \n", i);
        else
            printf("%d is a not Fibonacci Number \n", i);
    }
    return 0;
}

