#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include<assert.h>

#include"day7_assn.h"
#define ARRAY_SIZE 10
#define ARRAY_SIZE1 30

int main()
{
    int *array_one, *array_two;
    int pal_arr[] = {1, 2, 1};
    Min_max test_minmax;

    array_one = store_array_elements_dynamically(ARRAY_SIZE);
    array_two = store_array_elements_dynamically(ARRAY_SIZE1);

    //display_array(array_one, ARRAY_SIZE);

    /*7.1 searching an element using linear search*/
    assert(searching_array_dynamically(array_one, ARRAY_SIZE, 6) == 1);
    assert(searching_array_dynamically(array_one, ARRAY_SIZE, 61) == 0);

    /*7.2 finding minimum and maximum of dynamically allocated array elements*/
    test_minmax = min_max(array_one, ARRAY_SIZE, test_minmax);
    assert(test_minmax.min == 1);
    assert(test_minmax.max == 10);

    /*7.3 finding sum of the array elements*/
    assert(array_sum(array_one, ARRAY_SIZE) == 55);
    assert(array_sum(array_two, ARRAY_SIZE1) == 465);

    /*7.4 finding sum of odd numbers only from an array*/
    assert(array_sum_odd(array_one, ARRAY_SIZE) == 25);
    assert(array_sum_odd(array_two, ARRAY_SIZE1) == 225);

    /*7.5 finding sum of even numbers only from an array*/
    assert(array_sum_even(array_one, ARRAY_SIZE) == 30);
    assert(array_sum_even(array_two, ARRAY_SIZE1) == 240);

    /*7.6 checking if the given array is palindrome or not*/
    assert(is_array_palindrome(pal_arr, 3) == 1);

    /*7.7 clearing the allocated memory*/
    deallocate_memory(array_one);
    deallocate_memory(array_two);

    return 0;
}
