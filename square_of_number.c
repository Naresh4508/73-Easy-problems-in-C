#include<stdio.h>

int main(){
float number, square;
printf("Enter the number:");
scanf("%f",&number);
square = number * number;
printf("Square of %.2f is %.2f\n", number, square);
return 0;
}
