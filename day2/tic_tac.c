#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;


scanf("%d", &n);


int row = (n - 1) / 3;
int column = (n - 1) % 3;


printf("%d %d\n", row, column);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
