#include <stdio.h>
#include <string.h>

int main() {

    // write a program that will determine if the parrot is happy 
    // or not. The parrot is happy if it is 7am - 12nn or 8pm - 11pm
    // else the parrot is not happy if it is not in the range.
    //the program will ask the user if it is AM or PM in string and the time

    //declare variables
    int time;
    char ampm[3];

    //ask user for time
    printf("What time is it? : ");
    scanf("%d", &time);

    //ask user if it is AM or PM
    printf("AM or PM : ");
    scanf("%s", ampm);

    //check if it is AM or PM
    if (strcmp(ampm, "AM") == 0 || strcmp(ampm, "am") == 0) {
        //check if it is 7am - 12nn
        if (time >= 7 && time <= 12) {
            printf("Parrot is HAPPY");
        } else {
            printf("We are in trouble");
        }
    } else if (strcmp(ampm, "PM") == 0 || strcmp(ampm, "pm") == 0) {
        //check if it is 8pm - 11pm
        if (time >= 8 && time <= 11) {
            printf("Parrot is HAPPY");
        } else {
            printf("We are in trouble");
        }
    } else {
        printf("Invalid input");
    }


}



    // declare variables
    // int time;
    // int happy;


    // prompt user for time
    // printf("Enter time: ");
    // scanf("%d", &time);

    // determine if parrot is happy
    // if (time >= 7 && time <= 12 || time >= 20 && time <= 23) {
    //     printf("Parrot is HAPPY!");
    // } else {
    //     printf("We are in trouble");
    // }

 

    // char  single string
    //     if (ampm == "AM" || ampm == "am") {
    //     if (time >= 7 && time <= 12) {
    //         printf("The parrot is happy");
    //     } else {
    //         printf("The parrot is not happy");
    //     }
    // } else if (ampm == "PM" || ampm == "pm") {
    //     if (time >= 8 && time <= 11) {
    //         printf("The parrot is happy");
    //     } else {
    //         printf("The parrot is not happy");
    //     }
    // } else {
    //     printf("Invalid input");
    // }