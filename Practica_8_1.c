#include <stdio.h>
#include <stdlib.h>

main ()
{
  int n, i, r;

  printf("Favor de ingresar un numero del que desea saber la tabla de multiplicar\n");
  scanf("%d", n);

  for( i=1; i<10; i++)
    {
      printf("%d*%d="%d\n", r, i, n);
    }
  return 0;
}
