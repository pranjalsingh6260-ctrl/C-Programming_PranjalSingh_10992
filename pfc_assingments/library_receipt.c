# include<stdio.h>
int main(){
    char initial;
    int days;
 float fine;


    printf("Member_initials:\n");
    scanf("%c", &initial);

    printf("Days:");
    scanf("%05d", &days);

    printf("Fine:");
    scanf("%2f", &fine);

    printf("****LIBRARY RECEIPT*****\n"); 
    printf("Member_initials:%c\n", initial);
    printf("Days:%05d\n", days);
    printf("Fine:%0.2f\n", fine);
    printf("Pranjal Singh, ERP -- RU-25-10992");
    


    return 0;
}


    