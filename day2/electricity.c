
int main() {
    int units=200;
    float bill = 0;

    
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.5;
    } else if (units <= 400) {
        bill = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        bill = 200 + (units - 400) * 0.8;
    } else {
        bill = 425 + (units - 600) * 1.25;
    }

    printf("Rs.%.0f\n", bill);

    return 0;
}