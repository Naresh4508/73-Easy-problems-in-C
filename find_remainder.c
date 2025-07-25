#include<stdio.h>

int main(){
int dividend, divisor, remainder;
printf("Enter the dividend:");
scanf("%d", &dividend);
printf("Enter the divisor:");
scanf("%d", &divisor);
if(divisor==0){
printf("Division by zero error!.");
}else{
remainder = dividend % divisor;
printf("The remainder is: %d", remainder);
}
return 0;
}
