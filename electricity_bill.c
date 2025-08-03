#include <stdio.h>
int main() {
int units;
float bill = 0;
printf("Enter electricity units consumed: ");
scanf("%d", &units);
if(units <= 50)
bill = units * 3.0;
else if(units <= 150)
bill = (50 * 3.0) + (units - 50) * 5.0;
else if(units <= 250)
bill = (50 * 3.0) + (100 * 5.0) + (units - 150) * 7.0;
else
bill = (50 * 3.0) + (100 * 5.0) + (100 * 7.0) + (units - 250) * 10.0;

printf("Total electricity bill for %d units is ₹%.2f\n", units, bill);
return 0;
}
