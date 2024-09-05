#include <stdio.h>

int main()
{
    int n;
    printf("Enter your age :\n");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("You are eligible for voting ");
    }
    else if(n<=17 && n>=0)
    {
        printf("You are not eligible for voting ");
    }
    else
    {
        printf("You have entered a wrong age ");
    }

    return 0;
}
