#include<stdio.h>

int main(){
int number;
unsigned long long product = 1;
printf("Enter a positive integer:");
scanf("%d", &number);
if(number < 0){
printf("Error: Enter a non-negtive integer.\n");
return 1;
}
for(int i = 1; i <= number; ++i){
product *= i;
}
printf("The product of the first %d natural numbers is: %llu\n", number, product);
return 0;
}

