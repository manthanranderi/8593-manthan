// WAP to make reverse the 1D Array   Like : int a[10]= {1,5,7,3,2,9}      o/p: 9,2,3,7,5,1
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++);
    scanf("%d",&a[i]);
    printf("Elements of array are:");
    for(i=0;i<n;i++);
    printf("%d",a[i]);
    printf("\n");
    for(i=n-1;i>=0;i--);
    printf("%d",a[i]);
    
}