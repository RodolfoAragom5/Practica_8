/*Función exponencial*/

#include <stdio.h>
#include <stdlib.h>

int exp_for(int a, int b)
{
  int resp=1;
  int i=0;
  for (i=0; i<b; i++)
    {
      resp=a*resp;
      return(resp);
    }
}

int exp_while(int a, int b)
{
  int resp=1;
  int i=0;
    while (i<b)
    {
      resp=a*resp;
      i+1;
    }
    return(resp);
  }

int main()
{

  int a, b, resp;
  
  printf("Favor de ingresar un numero base\n");
  scanf("%d", &a);

  printf("Favor de ingresar su exponencial\n");
  scanf("%d", &b);

  printf("La respuesta en For es:\n");
  resp=exp_for(a,b);
  printf("%d\n", resp);

  printf("La respuesta en While es:\n");
  resp=exp_while(a,b);
  printf("%d\n", resp);

  return 0;
}
