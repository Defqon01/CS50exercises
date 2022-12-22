// includes

#include <stdio.h>
#include <cs50.h>

// declare functions
int add_two_ints(int a, int b);

int main(void)
{
    //ask user for input
    printf("Give me an integer: ");
    int x = get_int("");
    printf("");
    int y = get_int("Give me another integer: ");

    //add two numbers together via a function call
    int z = add_two_ints(x, y);

    //output the result
    printf("The sum of %i and %i is %i!\n", x, y, z);
}

int add_two_ints (int a, int b)
{
    int sum = a + b;
    return sum;
}
