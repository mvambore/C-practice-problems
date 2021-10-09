#include"day7_assn.h"

int store_array_elements_dynamically(int size){

    int *pointer = 0;

    pointer = (int *)malloc(size * sizeof(int));

    if(pointer == 0) return 0;

    else{
        for(int i = 0; i < size; i++){
            pointer[i] = i + 1;
        }

    }
    return pointer;
}

int display_array(int *arr, int size){

    printf("array elements are\n");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


/*7.1 searching an element using linear search */
int searching_array_dynamically(int *arr, int size, int search_element){

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == search_element)
            return 1;
    }
    return 0;
}

/*7.2 finding minimum and maximum*/
Min_max min_max(int *arr, int size,Min_max result)
{
    int i;

    result.min = result.max = arr[0];

    for(i=1;i<size;i++)
    {
        if(result.min > arr[i]) result.min = arr[i];
        if(result.max < *(arr+i)) result.max = *(arr+i);
    }
    return result;
}

/*7.3 finding sum of array elements*/
int array_sum(int *arr, int size){

    int sum = 0;

    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

/*7.4 finding sum of odd numbers from an array*/
int array_sum_odd(int *arr, int size){

    int odd_sum = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] %2 != 0){
            //printf("%d ", arr[i]);
            odd_sum += arr[i];
        }
    }
    //printf("\n");
    return odd_sum;
}

/*7.5 finding sum of even numbers from an array*/
int array_sum_even(int *arr, int size){

    int even_sum = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] %2 == 0){
            //printf("%d ", arr[i]);
            even_sum += arr[i];
        }
    }
    //printf("\n");
    return even_sum;
}

/*7.6 checking if the given array is palindrome or not*/
int is_array_palindrome(int arr[], int n){

    int i, j, flag = 0;
    for(i = 0, j = n-1; i < n/2, j >= n/2; i++, j--) {
        if(arr[i]!=arr[j]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}

/*7.7 clearing the allocated memory*/
int deallocate_memory(int *arr){

    free(arr);
}
