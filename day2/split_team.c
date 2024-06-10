#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int a,b,m,n;
    scanf("%d %d",&a,&b);
    m=a/b;
    n=a%b;
    printf("The number of friends in each team is %d and left out is %d",m,n);
    return 0;
}