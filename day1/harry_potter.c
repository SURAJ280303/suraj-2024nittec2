#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    int first=num/1000;
    int last=num % 10;
    int sum=first+last;
    printf("%d",sum);
    
    return 0;
}
