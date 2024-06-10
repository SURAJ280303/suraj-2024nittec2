#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    printf("Enter n\n");
    scanf("%d",&n);
     printf("Enter m\n");
    scanf("%d",&m);
    printf("The multiplication table of %d is\n",n);
    for(int i=1; i<=m; i++)
    {
        int c = i*n;
        printf("%d*%d=%d\n",i,n,c);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
