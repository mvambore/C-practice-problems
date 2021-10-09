#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

#include"day4-5_assn.h"

int main(){

    int arr[SIZE] = {7,2,5,8,2};
    int arr1[] = {5, 2, 8, 7, 1};
    int arr2[] = {5, 4, 8, 7, 1, 78, 9, 0, 18, 20};


    /*1. sorting of array*/
    sort_array(arr1, SIZE);
    display_array(arr1,SIZE);

    /*2. swapping of two numbers*/
    assert(swap_numbers(3, 4) == 1);
    assert(swap_numbers(4, 4) == 1);
    assert(swap_numbers(48, 1) == 1);
    assert(swap_numbers(-4, 94) == 1);

    /*3. program to find minimum and maximum of a given array*/
    assert(get_min_array(arr, SIZE) == 2);
    assert(get_max_array(arr, SIZE) == 8);


    /*6. program to search an element using linear search technique*/
    assert(linear_search_array(arr, SIZE, 1) == 0);
    assert(linear_search_array(arr, SIZE, 2) == 1);
    assert(linear_search_array(arr, SIZE, 9) == 0);
    assert(linear_search_array(arr, SIZE, 7) == 1);
    assert(linear_search_array(arr, SIZE, 6) == 0);

    /*7. Finding an element in an array using binary search*/
    assert(binary_search(arr2, 4) == 1);
    assert(binary_search(arr2, 1) == 1);
    assert(binary_search(arr2, 7) == 1);
    assert(binary_search(arr2, 5) == 1);
    assert(binary_search(arr2, 51) == 0);


    /*9. Finding length of the string*/
    string_length();

    /*10. displaying dates in words*/
    dates_in_words(16, 7, 1992);
    dates_in_words(3, 12, 2020);
    dates_in_words(1, 1, 2021);

    /*11. Converting string to uppercase*/
    char string[100];
    printf("Enter string to get to uppercase: \n");
    scanf("%s", string);
    to_uppercase(string);

    /*12. reversing a user given string*/
    string_reverse();

    /*14. Addition of two matrixes*/
    matrix_additon();

    return 0;
}
