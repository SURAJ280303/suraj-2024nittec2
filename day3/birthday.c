#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int year;
    scanf("%ld",&year);
    if((year%4==0 && year%100!=0)|(year%400==0)){
        printf("%ld is a leap year",year);
    }
    else
    {
        printf("%ld is not a leap year",year);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
