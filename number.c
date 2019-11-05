include<stdio.h>
int main()
{ 
  float a;
  printf("enter any value=");
  scanf("%f", &a);
  
  if (a<0)
  printf("%f is negative", a);
  else if(a>0)
  printf("%f is positive", a);
  else if(a=0)
  printf("%f is zero", a);

  return 0;
}
