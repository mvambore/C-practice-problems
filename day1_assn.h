#define PI 3.142
#define ZERO 0
#define EVEN 2
#define ODD 1
#define LEAP 3
#define NLEAP 4

char upper_to_lower(char input_upper_character);      /*Converts a character from uppercase to lowercase*/

float circle_area(float radius);            /*Area of the circle can found*/

float simple_intreset(int pr_amt, int time, float rate);       /*Function for finding simple
                                                                            interest and compound interest*/
float compound_intreset(int pr_amt, float rate,  int time);

float tempC_F(float temp);    /*Function for converting temperature from Celsius to Fahrenheit
                                            and visa-versa*/
float tempF_C(float temp);

int number_is_odd_even(int number);         /*Function to find if a given number is odd or not*/

int is_year_leap(int year);                 /*Function which tells the given year is leap year or not*/

int power_n(int n);                         /*Function for finding power of 2^N*/


