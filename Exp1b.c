//Sahil Shaikh Uin:-251P136 Computer Engineering D3
#include <stdio.h>

int main() {
    float phy, chem, maths, Average;
    printf("Enter your physics marks:");
    scanf("%f", &phy);

    printf("Enter your chemistry marks:");
    scanf("%f", &chem);

    printf("Enter your chemistry marks:");
    scanf("%f", &maths);

    Average = (phy + chem + maths) / 3;

    (Average >= 50) ? printf("You are eligible for admission!!") : printf("You are not eligible for admission!!");

    return 0;
}
