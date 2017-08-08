#include <stdio.h>
int main()
{
int num;
printf("Enter an integer: ");
scanf("%d", &num);
if(num % 2 == 0)
printf("even %d.", num);
else
printf("odd %d.", num);
return 0;
}
