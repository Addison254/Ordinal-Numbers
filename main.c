#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
unsigned int number;
printf("enter max number\n");
scanf("%i", &number);
int index;
for (index =1; index <number; index++)
{
  printf("%i\n", index);
}
return 0;
}