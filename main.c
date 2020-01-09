/*
    If the number ends with 1 then use the ordinal "st"
    1st, 11th (<!), 21st, 31st, 41st, 51st, 61st, 71st, 81st, 91st, 101st, 111th (<!)...
      Q: How can we handle occurrence of 1, 21, 31, 41...?
      A: We can check the remainder of the number divided bby 10 (num % 10)
      Q: How can we handle occurrences of 11, 111, 211, 311, ... ?
      

  If the number ends with 2 then use the ordinal "nd"
    2nd, 12th (<!), 22nd, 32nd, 42nd, 52nd, 62nd, 72nd, 82nd, 92nd, 102nd, 112nd (<!)...
     
     
  If the number ends with 3 then use the ordinal "rd"
    3rd, 13th (<!), 23rd, 33rd, 43rd, 53rd, 63rd, 73rd, 83rd, 93rd, 103rd, 113th (<!)...
     
*/
#include <stdio.h>
#include <stdlib.h>


int main(void) {

  unsigned int max;
  printf("Max: ");
  scanf("%u", &max);

  for (int i = 1; i <= max; i++)
  {
    switch(i %100) {
      case 11:
      case 12:
      case 13:
        printf("%ith\n", i);
        continue;
    }
  switch(i %10) // 1, 2, 3, 4-9
  {
      case 1: //1
        printf("%ist\n", i);
        continue;
      case 2: //2
        printf("%ind\n", i);
        continue;
      case 3: //3
        printf("%ird\n", i);
        continue;
      default: // 4-9
        printf("%ith\n", i);
        continue;

    }
  }

  return 0;
}