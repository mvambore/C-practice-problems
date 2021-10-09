#include<stdio.h>
#include "day1_assn.h"
#include<math.h>
#include<string.h>


/*2. Program to calculate the area of circle.*/
float circle_area(float radius){

    float area;

    //printf("Enter radius of a circle ");
    //scanf("%f", &radius);

    area = PI * radius * radius;
    printf("\nArea of circle is %.4f \n", area);
}


/*3. Program to calculate simple interest.*/
float simple_intreset(int pr_amt, int time, float rate){

    float simple_interest;

    /*Simple Interest calculation using (P*T*R/100) formula*/
    simple_interest = pr_amt * time * rate / 100;

    return simple_interest;
}


/*3.1. Program to calculate compound interest.*/
float compound_intreset(int pr_amt, float rate, int time){

    float compound_interest;

    /*Compound Interest calculation using {P * [1+(R/100)]^n - P}*/
    compound_interest = pr_amt * pow( (1 + ( rate / 100 ) ), time) - pr_amt;

    return compound_interest;
    //printf("%f", compound_interest);

}




/*4. Program to convert temperature from Celsius to Fahrenheit*/
float tempC_F(float temp){

    float tempF;

    /*conversion of temperature from Celsius to Fahrenheit*/
    return tempF = (temp * 1.8) + 32; /* formula is [(temp * 9/5)+32] */


}

/*4.1. Program to convert temperature from Fahrenheit to Celsius*/
float tempF_C(float temp){

    float tempC;

    /*conversion of temperature from Fahrenheit to Celsius*/
    return tempC = (temp - 32) * 1.8; /* formula is [(temp -32) * 9/5 */


}

/*5. Program to check if entered number is even or odd.*/
int number_is_odd_even(int number){

    /*if the remainder of any number is ZERO then its a EVEN number or else its a ODD number*/
    if(number % 2 == ZERO) return EVEN;
    else return ODD;
}

/*6. Program to check if entered year is leap year or not.*/
int is_year_leap(int year){

    /*if the given year is perfectly divisible by 400 and 4 then its a leap year*/
    if(year % 400 == ZERO || year % 4 == ZERO )
        return LEAP;
    else
        return NLEAP;
}

/*7. Power of 2^n using left shift operator*/
int power_n(int n){

    unsigned char two;// 0000 0010
    two = 2;

    //printf("2^%d = ", n);
    //printf("%d", two << (n - 1));
    return two << (n - 1);
}

/*1. Converting uppercase to lowercase*/
char upper_to_lower(char input_upper_character){

    char lower_character;

    lower_character = input_upper_character + 32;

    return lower_character;
}


