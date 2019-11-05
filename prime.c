#include<stdio.h>
int main()
{
  int prime,a=0;
  printf("enter number: \n");
  scanf("%d",&prime);

  for(int i=2;i<prime;i++)
{
  if(prime%i==0)
      a++;

}

if (a==0)
{ 
  printf("yes\n");    
}
  else
{
  printf("no\n");
}

return 0;
}
