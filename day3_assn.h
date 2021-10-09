#include<stdio.h>
#define CAT(A, B) A##B
#define SQR(A) A * A

int decimal_num_binary(int decimal_num); // function for converting given decimal number to binary

void n_bonnacci_numbers(int last_series_sum_number, int limit); // function generating a sequence of numbers ex. 0, 0, 1, 1, 2, 4, 7, 13 where last series sum number = 3 and limit = 8

void pattern(int row_size); // function which generates the pattern

int factorial(int number); // function which finds factorial of a given number

int number_power(int base, int exponent); // power of a given number using recursion
