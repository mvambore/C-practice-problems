
struct _min_max_
{
    int min, max;
};

typedef struct _min_max_ Min_max;

int store_array_elements_dynamically(int size); // function stores the array elements dynamically

int display_array(int *arr, int size);

int searching_array_dynamically(int *arr, int size, int search_element); // function which finds the given number from an array

Min_max min_max(int *arr, int size,Min_max);

int array_sum(int *arr, int size); // finds the sum of all the elements of an array

int array_sum_odd(int *arr, int size); // finds the sum of only odd numbers of an array

int array_sum_even(int *arr, int size); // finds the sum of only even numbers of an array

int is_array_palindrome(int arr[], int size); // finds if the given is array is palindrome or not. ex. arr[1, 2, 3] != arr[3, 2, 1]

int deallocate_memory(int *arr); // frees up the space which was allocated to the previous array


