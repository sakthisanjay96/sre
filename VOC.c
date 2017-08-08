#include <stdio.h>
int main()
{
char c;
int D,F;
printf("Enter an alphabet: ");
scanf("%c",&c);
D = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
F = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (D || F)
printf("%c is a vowel.", c);
else
printf("%c is a consonant.", c);
return 0;
}
