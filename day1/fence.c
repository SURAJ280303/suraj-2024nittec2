#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int l,b,area,length;
    scanf("%d %d",&l,&b);
    if(l>0 && b>0)
    {
        length=2*(l+b);
        printf("The required length is %d m\n",length);
        area=l*b;
         printf("The required area of carpet is %d sqm\n",area);
    } 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}