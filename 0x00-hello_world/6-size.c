#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
  */
int main(void)
{
char a;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %c byte(s) \n", (unsigned long)sizeof(a));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
