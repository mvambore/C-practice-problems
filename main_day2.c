#include<assert.h>
#include<stdio.h>
#include"day2_assn.h"

int main()
{
    /*1. Sum of the given digits*/

    assert(sum_of_digits(12345) == 15);
    assert(sum_of_digits(123) == 6);
    assert(sum_of_digits(13457) == 20);
    assert(sum_of_digits(10001) == 2);
    assert(sum_of_digits(1000) == 1);

    /*2. Reversing of a given number*/

    assert(reverse_of_number(123) == 321);
    assert(reverse_of_number(12345) == 54321);
    assert(reverse_of_number(4398) == 8934);
    assert(reverse_of_number(2021) == 1202);
    assert(reverse_of_number(1998) == 8991);

    /*4. Palindrome of a given number*/

    assert(is_palindrome(12321) == PAL);
    assert(is_palindrome(12343) == NPAL);
    assert(is_palindrome(989) == PAL);
    assert(is_palindrome(10001) == PAL);
    assert(is_palindrome(9981) == NPAL);

    /*3. Getting the count of the digits in a given number*/

    assert(number_count(1231, 1) == 2);
    assert(number_count(99991, 9) == 4);
    assert(number_count(4422777, 7) == 3);
    assert(number_count(122333, 2) == 2);
    assert(number_count(947412364, 4) == 3);
    assert(number_count(1234, 5) == 0);

    /*5. Prime number generation*/
    //prime_number_generation(100);

    /*7. Armstrong number*/

    assert(is_armstrong(153) == 153);
    assert(is_armstrong(351) == INVALID);
    assert(is_armstrong(2345) == INVALID);
    assert(is_armstrong(1634) == INVALID);
    assert(is_armstrong(371) == 371);

    /*8. Simple operation */
    simple_calc();


    return 0;
}
