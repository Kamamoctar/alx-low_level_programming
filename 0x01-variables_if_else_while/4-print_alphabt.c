#include <stdio.h>
/*
* Main: The entry point of my program
*
*Descriptions: The program print the alphabetic characters except for 'q' an 'e'
*Return: 0
*/

int main(void)
{
  char AlphA, e, q;
  AlphA='a';
  e='e';
  q='q';

  // for(AlphA='a'; AlphA<='z'; AlphA++)
  // {
  //     putchar(AlphA);
  //     if (AlphA=q)
  //   {
  //     continue;
  //   }
  //   else if (AlphA=e)
  //   {
  //     continue;
  //   }
  // }

  while (AlphA<='z')
  {
    if (AlphA==q)
    {
      AlphA++;
      continue;
    }
    else if (AlphA==e)
    {
      AlphA++;
      continue;
    }
    putchar(AlphA);
    AlphA++;
  }
  putchar('\n');
  return(0);
}
