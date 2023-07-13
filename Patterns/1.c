#include<stdio.h>
int main()
{
    int num,row=1,col;
    scanf("%d",&num);
    for(;row<=num;row++,printf("\n"))
    for(col=1;col<=num;printf("*"),col++);
    return 0;
}