#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float x,i,n;
    scanf("%f",&x);
    scanf("%f",&i);
    scanf("%f",&n);
    
    float intrest=(x*i*n)/100;
    
    float total=x+intrest;
    
    float discount=intrest*0.02;
    
    float ftotal=total-discount;
    
    printf("%.2f\n",intrest);
    printf("%.2f\n",total);
    printf("%.2f\n",discount);
    printf("%.2f\n",ftotal);
       
    return 0;
}
