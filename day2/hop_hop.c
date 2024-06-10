#include <stdio.h>
#include <math.h>

int main() {

    int peter_x = 3, peter_y = 4;
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int horizontal=x-peter_x;
    int vertical=y-peter_y;
    int maximum=fmax(horizontal,vertical);
    printf("%d\n",maximum);

    return 0;
}
