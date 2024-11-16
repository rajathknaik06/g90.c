/*In a mathematics competition, participants are asked to calculate the double factorial of a given positive integer. 



Write a program that takes the participant's input as a global variable n, computes the double factorial, and prints the result to help them in the competition.



Double Factorial: Product of all positive integers with the same parity down to 1 i.e,

If n is even, n!! is the product of all even integers from n to 1.
If n is odd, n!! is the product of all odd integers from n to 1.
Input format :
The input consists of an integer n.

Output format :
The output prints an integer representing the double factorial of n.*/


#include <stdio.h>

// Global variable 'num'
int num;

// Function to calculate the double factorial
int calculateDoubleFactorial() {
    if (num == 0 || num == 1) {
        return 1;
    }

    int result = 1;

    for (int i = num; i > 1; i -= 2) {
        result *= i;
    }

    return result;
}

int main() {
    scanf("%d", &num);
    int result = calculateDoubleFactorial();

    printf("%d\n", result);
    return 0;
}
