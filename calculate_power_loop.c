#include <stdio.h>
int main() {
int base, exponent;
long long result = 1;
printf("Enter the base: ");
scanf("%d",&base);
printf("Enter the exponent: ");
scanf("%d",&exponent);
if(exponent<0){
printf("Exponent must be non-negative.\n");
return 1;
}
for(int i=1;i<=exponent;i++){
result*=base;
}
printf("%d raised to the power of %d is %lld\n",base,exponent,result);
return 0;
}
