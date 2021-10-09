#include<stdio.h>
#include<assert.h>
#include "day1_assn.h"

int main(){

    /*1. assertion for upper case to lower case*/

    assert(upper_to_lower('H') == 'h');
    assert(upper_to_lower('A') == 'a');
    assert(upper_to_lower('C') == 'c');
    assert(upper_to_lower('P') == 'p');
    assert(upper_to_lower('L') == 'l');

    /*2. finding area of a circle.*/

    circle_area(2.5);
    circle_area(3.21);
    circle_area(6.2);
    circle_area(1.5);
    circle_area(7.2);

    /*3. finding simple interest and compound interest*/

    assert(simple_intreset(1000, 5, 1) == 50);
    assert(simple_intreset(1000, 5, 2) == 100);
    assert(simple_intreset(1000, 5, 3) == 150);
    assert(simple_intreset(1000, 5, 10) == 500);

    assert(compound_intreset(1000, 5, 2) == 102.5);

    /*4. converting Celsius to Fahrenheit */

    assert(tempC_F(0) == 32);
    assert(tempC_F(100) == 212);
    assert(tempC_F(-10) == 14);
    assert(tempF_C(32) == 0);

    /*5. finding if the given number is odd or even*/

    assert(number_is_odd_even(2) == EVEN);
    assert(number_is_odd_even(2100) == EVEN);
    assert(number_is_odd_even(94) == EVEN);
    assert(number_is_odd_even(3) == ODD);
    assert(number_is_odd_even(999) == ODD);
    assert(number_is_odd_even(7) == ODD);

    /*6. finding if the given year is leap year or not*/

    assert(is_year_leap(1998) == NLEAP);
    assert(is_year_leap(2020) == LEAP);
    assert(is_year_leap(2021) == NLEAP);
    assert(is_year_leap(2024) == LEAP);

    /*7. finding 2^n*/

    assert(power_n(2) == 4);
    assert(power_n(3) == 8);
    assert(power_n(5) == 32);
    assert(power_n(10) == 1024);

    return 0;
}
