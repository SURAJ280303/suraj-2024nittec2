#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sun,mon,tue,wed,thur,fri,sat;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",&sun,&mon,&tue,&wed,&thur,&fri,&sat);
    int rate1 = sun * 150;
    int rate7 = sat * 125;
    int rate2, rate3, rate4, rate5, rate6, bonus, bonusRate;
    if (mon <= 8)
    {
       rate2 = mon * 100;
    } 
    else
    {
        bonus = mon - 8;
        bonusRate = bonus * 115;
        rate2 = bonusRate + 800;
    }
    if (tue <= 8)
    {
       rate3 = tue * 100;
    } 
    else
    {
        bonus = tue - 8;
        bonusRate = bonus * 115;
        rate3 = bonusRate + 800;
    }
    if (wed <= 8)
    {
       rate4 = wed * 100;
    } 
    else
    {
        bonus = wed - 8;
        bonusRate = bonus * 115;
        rate4 = bonusRate + 800;
    }
    if (thur <= 8)
    {
       rate5= thur * 100;
    } 
    else
    {
        bonus = thur - 8;
        bonusRate = bonus * 115;
        rate5 = bonusRate + 800;
    }
    if (fri <= 8)
    {
       rate6 = fri * 100;
    } 
    else
    {
        bonus = fri - 8;
        bonusRate = bonus * 115;
        rate6 = bonusRate + 800;
    }
    int totalRate = rate1 + rate2 + rate3 + rate4 + rate5 + rate6 + rate7;
    printf("%d",totalRate);
    return 0;
}

