#include<stdio.h>
int main()
{ 
  int a,b,c,rem;
  printf("enter two values: ");
  scanf("%d,%d", &a, &b);
  c=a+b;
  printf("%d+%d=%d\n", a, b, c);
  c=a*b;
  printf("%d*%d=%d\n", a, b, c);
  c=a-b;
  printf("%d-%d=%d\n", a, b, c);
  c=a/b;
  printf("%d/%d=%d\n", a, b, c);
  rem=a%b;
  printf("remainder=%d\n", rem);

  return 0;
}
