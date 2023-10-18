#include<stdio.h>
void main()
{
int n;
printf("Enter array size ");
scanf("%d",&n);
float arr[n];

for(int I=0;I<n;I++)
{
printf("Enter %d array elements ",I);
scanf("%f",&arr[I]);
}

printf("\n");

printf("Array is given below\n");
for(int I=0;I<n;I++)
{
printf("%.2f \t",arr[I]);
}

printf("\n\n");

printf("Reverse Array is given below\n");

for(int I=n-1;I>=0;I--)
{
printf("%.2f \t",arr[I]);
}
}
