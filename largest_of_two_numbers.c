#include<stdio.h>

int main(){
int num1,num2;
printf("Enter the two numbers:");
scanf("%d %d",&num1, &num2);
if(num1>num2){
printf("The largest number is:%d\n", num1);
}else if(num2>num1){
printf("The largest number is:%d\n", num2);
}else{
printf("Both numbers are equal.");
}
return 0;
}
