#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For tolower() function

int main() {
    char month[20];
    int year, days = 0;

    // Prompt the user to enter the name of the month
    printf("Enter the name of the month: ");
    scanf("%s", month);

    // Convert the input to lowercase to handle case sensitivity
    for(int i = 0; month[i]; i++){
        month[i] = tolower(month[i]);
    }

    // Use a switch statement to determine the number of days based on the month name
    switch(month[0]) {
        case 'j':
            if(strcmp(month, "january") == 0 || strcmp(month, "june") == 0 || strcmp(month, "july") == 0) {
                days = (strcmp(month, "june") == 0) ? 30 : 31;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'f':
            if(strcmp(month, "february") == 0) {
                printf("Enter the year: ");
                scanf("%d", &year);
                // Check for leap year
                if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                } else {
                    days = 28;
                }
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'm':
            if(strcmp(month, "march") == 0) {
                days = 31;
            } else if(strcmp(month, "may") == 0) {
                days = 31;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'a':
            if(strcmp(month, "april") == 0) {
                days = 30;
            } else if(strcmp(month, "august") == 0) {
                days = 31;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 's':
            if(strcmp(month, "september") == 0) {
                days = 30;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'o':
            if(strcmp(month, "october") == 0) {
                days = 31;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'n':
            if(strcmp(month, "november") == 0) {
                days = 30;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        case 'd':
            if(strcmp(month, "december") == 0) {
                days = 31;
            } else {
                printf("Invalid month entered.\n");
            }
            break;
        default:
            printf("Invalid month entered.\n");
    }

    // If valid days were determined, print the number of days
    if (days != 0) {
        printf("Number of days in %s: %d\n", month, days);
    }

    return 0;
}
