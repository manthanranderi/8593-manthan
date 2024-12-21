// WAP to find square of any number using UDF

#include<stdio.h>
#include<conio.h>

int square(int num)
{
    return num*num;
}
int main()
{
    int number,result;
    
    printf("Enter a number:");
    scanf("%d", &number);
    result=square(number)

    printf("square of %d is %d\n",number,result);

    getch();
    return 0;   
}