#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age,year,income,arrears;
    float test,att;
    
    scanf("%d\n%d\n%d\n%d\n%f\n%f",&age,&year,&income,&arrears,&test,&att);
    if(age>=18 && age<=21 &&  year>=2021 && income<=200000 && arrears<=2 && test>=60 && att>=80)
        {
        printf("Eligible");
    }
     else if ( 18<=age && age<=21 &&  year>=2021 && income>=200000 && income<250000 && arrears>2 && test>=80 && att>=90)
    {
        printf("Partially Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}

  