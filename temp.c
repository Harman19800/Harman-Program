include<stdio.h>
int main()
{ 
  float a,b;
  printf("\n enter temp value in fahrenheit");
  scanf("%f", &a);
  b=(a-32)*5/9;
  printf("b=%.3f\n", b);
  return 0;
} 
  
