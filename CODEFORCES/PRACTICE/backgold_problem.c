//backgold_problem.c
//prince

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n/2);
    int i;
    for(i=1; i<n/2; i++)
    {
        printf("2 ");
    }
    if(n%2 == 0)
    {
        printf("2 ");
    }
    else
    {
        printf("3 ");
    }

    return 0;
}