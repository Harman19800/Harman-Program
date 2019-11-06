#include<stdio.h>
int main()
{
int n,sum=0,exp;
printf("enter number of employes:");
scanf("%d",&n);
      
for(int i=1;i<=n;i++)
   { 
    printf("enter experience  of %dth employes:",i);
    scanf("%d",&exp);
    sum=sum+exp;
    
   }
printf("total experience:%d\n",sum);
return 0;
}
