#include "day2_assn.h"

/*1. Program to find sum of the given digits*/
int sum_of_digits(int digits){

    int sum = 0;

    while(digits > ZERO){ // while loop goes on till the digits values reaches 0

        sum += digits % 10; // digits % 10 gets the last digit of given input and adds it with the sum variable; initially it is ZERO
        digits /= 10;
    }
    return sum;
}

/*2. Program to reverse a given number*/
int reverse_of_number(int number){

    int reverse = 0, last_digit;
    while(number > ZERO){

        last_digit = number % 10; // will get the last digit of a given number
        reverse = reverse * 10 + last_digit; // here we're adding the last digit to the reverse variable
        number /= 10; // reduces the ever digit
    }
    return reverse;
}

/*4. Program to check if the given number is palindrome or not */
int is_palindrome(int given_number){

    if(given_number == reverse_of_number(given_number)) //reusing the reverse of number function for checking
        return PAL;
    else
        return NPAL;
}

/*3. Program for finding the occurrences of digits in a number */
int number_count(int number, int count_digit){

    int count = 0, digit_of_number = 0;

    while(number > ZERO){

        digit_of_number = number % 10; // last digit of a given number is stored
        if(digit_of_number == count_digit) count++; // last stored digit is compared with the
        number = number / 10;                       //desired digit is it matches then count value is incremented
    }
    return count;
}

/*5. Prime number generation program*/
int prime_number_generation(int n_value){

    for(int i = 2; i <= n_value; i++){

        int count = 0;
        for(int j = 1; j <= i; j++)
            if(i % j == ZERO)
                count++;
        if(count < n_value)
            printf("%d\t", i);
    }
    return 0;
}

/*7. Program to find if the given number is Armstrong number or not*/
int is_armstrong(int number){

    int temp, sum = 0, reminder = 0;
    temp = number; // storing the given number for checking

    while(number != 0){

        reminder = number % 10; // if the number is 153 then we'll get 3 first then 5 and at last 1
        sum += reminder * reminder * reminder; // reminder is multiplied 3 times and stored in sum
        number /= 10; // here the we reduce the digits in the number
    }
    if(sum == temp) return sum;
    else return INVALID;
}

/*8. Menu driven program for performing addition, multiplication, division and subtraction*/
void simple_calc(){

    int choice, input_num1, input_num2;
    int integer_sum, integer_differece, integer_product;

    while(1){

        printf("Enter your choice\n 1 -> Addition\n 2 -> Subtraction\n 3 -> Multiplication\n 4 -> Exit\n");
        scanf("%d", &choice);

        switch(choice){

            case 1: printf("Enter two numbers for addition operation\n");
                    scanf("%d %d", &input_num1, &input_num2);

                    integer_sum = input_num1 + input_num2;
                    printf("%d + %d = %d\n", input_num1, input_num2, integer_sum);
                    break;

            case 2: printf("Enter two numbers for subtraction operation\n");
                    scanf("%d %d", &input_num1, &input_num2);

                    integer_differece = input_num1 - input_num2;
                    printf("%d - %d = %d\n", input_num1, input_num2, integer_differece);

                    break;

            case 3: printf("Enter two numbers for multiplication operation\n");
                    scanf("%d %d", &input_num1, &input_num2);

                    integer_product = input_num1 * input_num2;
                    printf("%d x %d = %d\n", input_num1, input_num2, integer_product);

                    break;

            case 4: printf("Thank you\n");
                    exit(0);

            default:    printf("Invalid option\n");
        }

    }
}
