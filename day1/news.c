#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int revenue = a * b;
  
    int total_cost = a * c + 100;
   
    int profit = revenue - total_cost;

    printf("%d\n", profit);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}