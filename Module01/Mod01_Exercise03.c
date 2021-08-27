#include <stdio.h>
int main()
{

  int age[]={2,5,3,1,7};
  int a = *(&age + 1) - age;
  printf("Length of an array = %d \n", a);
  return 0;

}