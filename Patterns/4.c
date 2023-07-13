#include<stdio.h>
int main()
{
int n,row,col;
scanf("%d",&n);
for(row=n;row>=1;row--,printf("\n"))
{
for(col=row;col<n;col++)
printf(" ");
for(col=1;col<=(2*row-1);col++)
{
printf("*");
}
}
return 0;
}