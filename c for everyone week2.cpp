#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("volume is : %d \n", 4*22*radius*radius*radius/3*7 );
    return 0;
}
