//Reverse order of any Integer
#include<stdio.h>
int main()
{
    int number, remainder, reverse = 0;
    printf("Enter an integer number : ");
    scanf_s("%d", &number);
    while (number!= 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("\nReverse order of that integer is %d\n ", reverse);
    return 0;

}