
#include"day3_assn.h"

/*1. Converting decimal number to binary number  */
int decimal_num_binary(int decimal_num){

    int binary_num[32];
    int i = 0;

    while(decimal_num > 0){
        binary_num[i] = decimal_num % 2;
        decimal_num /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary_num[j]);
    printf("\n\n");

   return 0;
}

/*2. Generating N Bonnacci numbers */
void n_bonnacci_numbers(int last_series_sum_number, int limit){

    int a[15] = {0};
    a[last_series_sum_number - 1] = 1;

    for(int i = last_series_sum_number; i < limit; i++)
        for(int j = i - last_series_sum_number; j < i; j++)
            a[i] += a[j];

    for(int i = 0; i < limit; i++)
        printf("%d ", a[i]);
    printf("\n\n");
}


/*3. Generating following pattern*/
// * * * *
//   * * *
//     * *
//       *
void pattern(int row_size){

    int pat;
    pat = row_size;

    for(int row = 1; row <= row_size; row++){
        for(int col = 1; col < row; col++){
            printf(" ");
        }
        for(int p = 1; p <= pat; p++)
            printf("*");
        pat--;
        printf("\n");
    }
}

/*int factorial(int number){

    // 4 ==> 4 x 3 x 2 x 1 = 24
    int factorial = 1;                  // non recursion method for finding
                                        // factorial of given number
    for(int i = 1; i <= number; i++)
        factorial = factorial * i;

    printf("%d", factorial);
}*/


/*5. Recursion function for finding power of a given number */
int number_power(int base, int exponent){

    if(exponent != 0) return (base * number_power(base, exponent - 1));
    else return 1;
}


/*6. factorial of a number using recursion*/
int factorial(int number){

    if(number == 0) return 1;
    return number * factorial(number - 1);
}


