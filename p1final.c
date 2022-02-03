#include<stdio.h>
int input()
{
  int num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  return num;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
  int num1,num2;
  num1=input();
  num2=input();
  int sum;
  sum=add(num1,num2);
  output(num1,num2,sum);
  return 0;
}