#include<stdio.h>

int main(){
float number, cube;
printf("Enter the number:");
scanf("%f", &number);
cube = number * number * number;
printf("The cube is %.2f is %.2f\n", number , cube);
return 0;
}
