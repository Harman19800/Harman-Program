#include<stdio.h>
int main()
{
  int i,j;
  printf("table of: \n");
  scanf("%d",&j);
  if (j%2==0)
  {
    for(i=0;i<=10;i++)
    printf("%d * %d = %d \n", i, j, i*j);
  }
  else
  {
  printf("number is odd\n");                                        
  }
  return 0;
  }                                                                 


                                                                                       


                                               
