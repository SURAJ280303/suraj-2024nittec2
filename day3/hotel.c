#include <stdio.h>

int main() {
    int month, room_rent, days_stayed;
    float tariff;

   
    scanf("%d %d %d", &month, &room_rent, &days_stayed);

    
    if (month < 1 || month > 12) {
        printf("Invalid Input\n");
        return 0;
    }

    
    if ((month >= 4 && month <= 6) || (month >= 11 && month <= 12)) {
        
        tariff = room_rent * 1.20 * days_stayed;
    } else {
        
        tariff = room_rent * days_stayed;
    }

    
    printf("%.0f\n", tariff);

    return 0;
}