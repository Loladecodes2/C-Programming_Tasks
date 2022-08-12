#include <stdio.h>
// A Program that calculate the product of two integers and print the result.//

int integer_Multiply(int n , int m) // A function created to call in the program //
{
  int result;
  result = n * m;
  return result;
}

int main()
{
  int product;
  product = integer_Multiply(10 , 30);
  printf("Product of 10 and 30 is %d \n" , product);

  int Product;
  Product = integer_Multiply(3 , 5);
  printf("Product of 3 and 5 is %d." , Product);
  return(0);
}