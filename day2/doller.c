#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int dollar1, cent1, dollar2, cent2;
    scanf("%d", &dollar1);
    scanf("%d", &cent1);
    scanf("%d", &dollar2);
    scanf("%d", &cent2);
    int total_cents = (dollar1 * 100 + cent1) + (dollar2 * 100 + cent2);
     int dollars = total_cents / 100;
    int cents = total_cents % 100;
    printf("%d\n", dollars);
    printf("%d\n", cents);
    return 0;
}
