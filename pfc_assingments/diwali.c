#include <stdio.h>
#include <windows.h>
int main(){
    int price, quantity;
    float discount;
    printf("Item Price=");
    scanf("%d", &price );


    printf("quantity=");
    scanf("%d", &quantity );

    printf("discount=");
    scanf("%f", &discount );

    printf("****DIWALI FIREWORKS*****\n");
    printf("Item Price=%d\n", price);
    printf("quantity=%d\n", quantity);
    printf("discount=%f\n", discount);
    printf("Total Price=%.2f\a\n", (price*quantity)-(discount/100)*(price*quantity));
    
    Beep(750, 800);
    printf("Pranjal Singh, ERP -- RU-25-10992");
    return 0;
    
}