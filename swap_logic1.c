#include<stdio.h>

void swap(int*,int*);

void main()
{   
    int num1,num2;
    
    printf("\tSwapping Variables: using temporary variable\n");
    
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    
    printf("\nNumbers before swapping: ");
    printf("\tNum1= %d   Num2= %d\n",num1,num2);
    
    swap(&num1,&num2);
    
    printf("\nNumbers after swapping: ");
    printf("\tNum1= %d   Num2= %d\n",num1,num2);
}

void swap(int *m,int *n)
{
    int temp;
    
    temp=*m;
    *m=*n;
    *n=temp;
}
