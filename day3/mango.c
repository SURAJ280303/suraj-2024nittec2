#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int row,col,tree;
    scanf("%d%d%d",&row,&col,&tree);
    
    if((tree<=col || tree%col==1 || tree%col==0)&&(tree<=row || tree%row==1 || tree%row==0))
       {
           printf("Yes");
       }
       else
       {
           printf("No");
       }
        
    return 0;
}
