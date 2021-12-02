#include <stdio.h>

#include <stdlib.h>

#include <time.h>



int main()

{

 int X, i, j;

 char C, C2;



 srand(time(NULL));



 for (i = 1; i > 0; i++)

 {

  X = 1 + rand() % 26;

  C = 'a' + (X - 1);

  printf("%c\n", C);

  if (C == 'a' || C == 'i' || C == 'h' || C == 'w' || C == 'u' || C == 'o')

  {

   break;

  }

 }



 for (j = 1; j > 0; j++)

 {

  X = 1 + rand() % 26;

  C2 = 'a' + (X - 1);

  printf("%c%c\n", C, C2);



  if (C == 'a' && C2 == 't')

  {



   break;

  }

  else if (C == 'i' && C2 == 's')

  {



   break;

  }

  else if (C == 'h' && C2 == 'e')

  {



   break;

  }

  else if (C == 'w' && C2 == 'e')

  {



   break;

  }

  else if (C == 'u' && C2 == 'p')

  {

   break;

  }

  else if (C == 'o' && C2 == 'n')

  {



   break;

  }

 }



 printf("Word: %c%c \n", C, C2);

 printf("The number of letters typed: %d\n\n", (i + j));



 return 0;

}