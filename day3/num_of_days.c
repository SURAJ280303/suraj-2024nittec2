#include <stdio.h>

int main() {
    int year, month;
    scanf("%d", &year);
    scanf("%d", &month);

    if (year < 1900 || year > 9999 || month < 1 || month > 12) {
        printf("0\n");
        return 0;
    }

    int days;

    
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = isLeapYear ? 29 : 28;
            break;
    }

    printf("%d Days\n", days);

    return 0;
}
