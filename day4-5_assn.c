
#include"day4-5_assn.h"


/*1. sorting array elements*/
int sort_array(int arr[], int size){

    int temp = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }


}
int display_array(int arr[], int size){

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

/*2. swapping of two numbers*/
int swap_numbers(int number_one, int number_two){

    int temp, before_swap_num1, before_swap_num2;

    before_swap_num1 = number_one;
    before_swap_num2 = number_two;

    temp = number_one;
    number_one = number_two;
    number_two = temp;

    if(before_swap_num1 == number_two && before_swap_num2 == number_one || number_one == number_two)
        return 1;
    else
        return 0;
}

/*3. finding minimum and maximum element from an array*/
int get_min_array(int arr[], int size)
{
    int i, min;

    if(size < 0)
        return -1;

    min = arr[0]; // 4,2,6,1,7

    for(i=1 ; i< size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int get_max_array(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i=0; i<size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}

/*6. Function for finding an element in array using linear search*/
// Function returns 1 if element found, returns 0 if not
int linear_search_array(int arr[], int size, int element)
{
    int i; // int arr[] = 4, 2, 6, 1, 7

    for(i = 0; i< size; i++)
    {
        if(arr[i] == element)
            return 1;
    }
    return 0;
}


/*7. Searching an element using binary search*/
int binary_search(int array[], int search){

    sort_array(array, 10);

    int first = 0, last, middle = 0;
    last = 9;

    while(last >= first){

        middle = (last + first) / 2;

        if(array[middle] == search){
            //printf("found");
            return 1;
            break;
        }

        else if (array[middle] < search)
            first = middle + 1;

        else
            last = middle - 1;
    }
    if (first > last)
        //printf("notf");
        return 0;
}


/*9. Finding length of user entered string*/
int string_length(){

    char str[1000];
    int i, length = 0;

    printf("Enter the String: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
        length = i;

    printf("Length of %s is %d\n\n", str, (length + 1));

    return 0;
}

/*10. displaying dates in words*/
char * display_date(int date){

    if(date == 1 || date == 2) return("st");

    else if(date == 3) return("rd");

    else return("th");

}

int dates_in_words(int date, int month, int year){

    switch(month){

        case 1: printf("%d%s Jan, %d\n",date, display_date(date), year);
                break;

        case 2: printf("%d%s Feb, %d\n",date, display_date(date), year);
                break;

        case 3: printf("%d%s Mar, %d\n",date, display_date(date), year);
                break;

        case 4: printf("%d%s April, %d\n",date, display_date(date), year);
                break;

        case 5: printf("%d%s May, %d\n",date, display_date(date), year);
                break;

        case 6: printf("%d%s June, %d\n",date, display_date(date), year);
                break;

        case 7: printf("%d%s July, %d\n",date, display_date(date), year);
                break;

        case 8: printf("%d%s Aug, %d\n",date, display_date(date), year);
                break;

        case 9: printf("%d%s Sep, %d\n",display_date(date), year);
                break;

        case 10: printf("%d%s Oct, %d\n",display_date(date), year);
                break;

        case 11: printf("%d%s Nov, %d\n",date, display_date(date), year);
                break;

        case 12: printf("%d%s Dec, %d\n",date, display_date(date), year);
                break;

    }
    return 0;
}

/*11. Converting a string to uppercase*/
int to_uppercase(char string[]){

    for (int i = 0; string[i]!='\0'; i++) {
      if(string[i] >= 'a' && string[i] <= 'z') {
         string[i] -= 32;
      }
   }
   printf("\nString in Upper Case = %s", string);
   return 0;

}

/*12. Reversing a user given string*/
int string_reverse(){

    char string[100];
    int len = 0, point;

    printf("\n\nEnter a string to reverse: ");
    scanf("%s", string);

    for(int i = 0;  string[i] != '\0'; i++)
        point = i;

    while(point != -1){
        printf("%c", string[point]);
        point--;
    }
    printf("\n\n");
}

/*14. matrix additon*/
int matrix_additon(){


    int row, col, mat1[100][100], mat2[100][100], sum[100][100], i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

      printf("\nEnter elements of 1st matrix:\n");
      for (i = 0; i < row; i++)
        for (j = 0; j < col; j++){
          printf("Enter element matrix 1 [%d][%d]: ", i + 1, j + 1);
          scanf("%d", &mat1[i][j]);
        }

      printf("\nEnter elements of 2nd matrix:\n");
      for (i = 0; i < row; i++)
        for (j = 0; j < col; j++){
          printf("Enter element matrix 2 [%d][%d]: ", i + 1, j + 1);
          scanf("%d", &mat2[i][j]);
        }

      // adding two matrices
      for (i = 0; i < row; i++)
        for (j = 0; j < col; j++){
          sum[i][j] = mat1[i][j] + mat2[i][j];
        }

      // printing the result
      printf("\nSum of two matrices: \n");
      for (i = 0; i < row; i++)
        for (j = 0; j < col; j++){
          printf("%d   ", sum[i][j]);
          if (j == col - 1) {
            printf("\n\n");
          }
        }

      return 0;
}







