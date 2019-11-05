include<stdio.h>
int main()
{ 
 int i,n,j;
 printf("table of:\n");
 scanf("%d",&i);
  
 printf("enter initial range:\n");
 scanf("%d",&j);
  
 printf("enter final range:\n");
 scanf("%d",&n);
 
 for(j ;j<=n;j++)
{
 printf("%d * %d = %d \n", i, j, i*j);
}
return 0;
}
                               
