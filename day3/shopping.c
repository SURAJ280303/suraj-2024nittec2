#include <stdio.h>

int main() {
    int fk_price, fk_discount, fk_shipping;
    int sd_price, sd_discount, sd_shipping;
    int am_price, am_discount, am_shipping;
    int fk_final, sd_final, am_final;

    scanf("%d %d %d", &fk_price, &fk_discount, &fk_shipping);

  
    scanf("%d %d %d", &sd_price, &sd_discount, &sd_shipping);

    
    scanf("%d %d %d", &am_price, &am_discount, &am_shipping);

   
    fk_final = fk_price * (100 - fk_discount) / 100 + fk_shipping;
    sd_final = sd_price * (100 - sd_discount) / 100 + sd_shipping;
    am_final = am_price * (100 - am_discount) / 100 + am_shipping;

    
    printf("In Flipkart: Rs.%d\n", fk_final);
    printf("In Snapdeal: Rs.%d\n", sd_final);
    printf("In Amazon: Rs.%d\n", am_final);

    
    if (fk_final <= sd_final && fk_final <= am_final) {
        printf("Choose Flipkart\n");
    } else if (sd_final <= fk_final && sd_final <= am_final) {
        printf("Choose Snapdeal\n");
    } else {
        printf("Choose Amazon\n");
    }

    return 0;
}
