#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    float midpoint_x, midpoint_y;

   
    scanf("%d %d", &x1, &y1);
    
    scanf("%d %d", &x2, &y2);

    midpoint_x = (float)(x1 + x2) / 2;
    midpoint_y = (float)(y1 + y2) / 2;

    printf("Arun's house is located at(%.1f,%.1f)\n", midpoint_x, midpoint_y);

    return 0;
}
