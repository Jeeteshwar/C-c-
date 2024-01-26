#include <stdio.h>

enum Weekday {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    int day;

    printf("Enter a number (1-7) representing a day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case Sunday:
            printf("Sunday\n");
            break;
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
