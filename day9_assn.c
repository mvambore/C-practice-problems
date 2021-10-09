
#include"day9_assn.h"

/*1. Displaying the contents of a specific file */
void display_contents(char *file_name){

    FILE *file_pointer;
    char read_file[200];

    file_pointer = fopen(file_name, "r");

    while((fgets(read_file, 200, file_pointer)) != NULL)
        printf("%s", read_file);

    fclose(file_pointer);
}

/*2. Copying the contents of one file to an another file*/
int file_copy(char *source, char *destination){

    FILE *source_pointer, *destination_pointer;
    char read[200];

    source_pointer = fopen(source, "r");
    destination_pointer = fopen(destination, "w");

    if(source_pointer == NULL || destination_pointer == NULL) return 0;

    while((fgets(read, 200, source_pointer)) != NULL)
        fputs("(copied) ", destination_pointer);
        fputs(read, destination_pointer);

    fclose(source_pointer);
    fclose(destination_pointer);

    return 1;
}

/*3. Counting number of spaces, characters and lines in a given file*/
int count_chars_spaces_line(char *file_name){

    FILE *file_Pointer;
    int chars = 0, spaces = 0, lines = 0;
    char ch;

    file_Pointer = fopen(file_name, "r");

    while((ch = fgetc(file_Pointer)) != EOF){

        if(ch != ' ' && ch != '\t')
            chars++;

        if(ch == ' ')
            spaces++;

        if(ch == '\n')
            lines++;
    }
    printf("Number of characters: %d\nNumber of spaces: %d\nNumber of lines: %d\n", chars, spaces, (lines + 1));
    return 0;
}
/*4. Checking the number is odd or even and write to corresponding odd.txt or even.txt accordingly */
int file_odd_even(char *file_name){

    FILE *file_pointer, *odd_file_pointer, *even_file_pointer;
    char ch_num[100];
    int num = 0;

    file_pointer = fopen(file_name, "r");

    while((fgets(ch_num, 100, file_pointer)) != NULL){

        num = atoi(ch_num);

        if(num % 2 == 0){
            even_file_pointer = fopen("even.txt", "a");
            fputs("even\n", even_file_pointer);
            fclose(even_file_pointer);
        }

        else{
            odd_file_pointer = fopen("odd.txt", "a");
            fputs("odd\n", odd_file_pointer);
            fclose(odd_file_pointer);
        }
    }
    fclose(file_pointer);

    return 0;
}
