#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    int password,otp;

    printf("Enter username: ");
    scanf(" %c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

    printf("Enter password: ");
    scanf("%d", &password);

    if (c1 == 'a' && c2 == 'd' && c3 == 'm' && c4 == 'i' && c5 == 'n'){
        if(password==123){
            printf("Enter OTP:");
            scanf("%d",&otp);
            if(otp==666){
                printf("Login Successful\n");
            }else{
                printf("Invalid OTP\n");
            }
        }else{
            printf("Incorrect Password\n");
        }
    } else{
        printf("Invalid Username\n");
    }
  

    return 0;
}
