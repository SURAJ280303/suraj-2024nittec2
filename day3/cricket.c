#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    float m = a/6;
    int n = y/6;
    int p = y%6;
    float k = ((float)n + (float)p/10);
    float d = x/k;
    float f = b/m;
    printf("%.f\n",m);
    printf("%.1f\n",k);
    printf("%.1f\n",d);
    printf("%.1f\n",f);
    if(d>f)
    {
        printf("Eligible to Win");
    }
    

    else
    {
         printf("Not Eligible to Win");
    }



    return 0;
}


