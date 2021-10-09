#include<assert.h>
#include"day3_assn.h"

int main()
{

    /*1. converting decimal number to binary number*/
    decimal_num_binary(2);
    decimal_num_binary(5);
    decimal_num_binary(6);


    /*2. N-Bonnacci series*/
    n_bonnacci_numbers(3, 8);

    /*3. generating the following pattern*/
    // * * * *
    //   * * *
    //     * *
    //       *
    pattern(4);


    /*5. Finding power of a number using recursion*/
    assert(number_power(2, 3) == 8);
    assert(number_power(3, 2) == 9);
    assert(number_power(5, 2) == 25);
    assert(number_power(9, 2) == 81);


    /*6. Factorial of a number using recursion*/
    assert(factorial(4) == 24);
    assert(factorial(5) == 120);
    assert(factorial(9) == 362880);
    assert(factorial(2) == 2);

    return 0;

    /*8. Concatenation using Macros */
    assert(CAT(3,2) == 32);
    assert(CAT(1,2) == 12);
    assert(CAT(90,1) == 901);
    assert(CAT(66,12) == 6612);

    /*9. Square of a number using Macros*/
    assert(SQR(2) == 4);
    assert(SQR(3) == 9);
    assert(SQR(10) == 100);
    assert(SQR(5) == 25);

}
