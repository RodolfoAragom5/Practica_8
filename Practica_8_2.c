#include <stdio.h>
#include <stdlib.h>

main ()
{
  int n, i=1, r;

  printf("Favor de ingresar un numero del que desea saber la tabla de multiplicar\n");
  scanf("%d", &n);
  
  while( i<=10)
    {
      r=n*i;
      printf("%d*%d=%d\n", n, i, r);
      i=i+1;
    }
  return 0;
}
