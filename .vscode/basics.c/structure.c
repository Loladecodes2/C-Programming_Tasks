#include <stdio.h>
// A Program to calculate addition and multiply two integers. //

int integer_add(int x , int y) // An addition function to call //
{
  int result;
  result = x + y;
  return result;
}
int integer_multply(int a , int b) // multiplication function to call //
{
  int result;
  result = a * b;
  return result;
}

int main()
{
  int sum;
  sum = integer_add(5 , 12);
  printf("Addition of these two integers 5 and 12 is %d\n" ,sum);

  int Add;
  Add = integer_add(7 , 10);
  printf("Addition of these two integers 7 and 10 is %d\n" , Add);

  int Mult;
  Mult = integer_multply(5 , 12);
  printf("Multiplication of these two integers 5 and 12 is %d\n" , Mult);

  int multi;
  multi = integer_multply(7 , 10);
  printf("multplication of these two integers 7 and 10 is %d.\n" , multi);
  return(0);
}