#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float area;
    printf("Enter value of First side (a) :");
    scanf("%d",&a);
    printf("\nEnter value of second side (b) :");
    scanf("%d",&b);
    printf("\nEnter value of third side (c) :");
    scanf("%d",&c);
    float s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of Triangle=%f",area);
    getch();
}
