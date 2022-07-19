#include <stdio.h>

int main(int , char * [])
{
    int i = 0;
    while (i < 25)
    {
      printf("%d", i);
      i++;
    }
    int age = 22;
    float height = 5.5;
    printf("\nHello World \n");
    printf("I am %d years old.\n", age);
    printf("I am %f centimeter tall.\n", height);
    return (0);
}