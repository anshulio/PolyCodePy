#include <stdio.h>
int getRem(int rem);
// Program to convert 32 bit integer to Binary representation

int arr[32];
int main()
{

    printf("Enter number : ");
    int a;
    scanf("%d", &a);

    getRem(a);
    for (int i = 31; i > -1; i--)
    {
        printf("%d", arr[i]);
    }
}

int getRem(int rem)
{
    static int i = 0;
    if (rem == 0)
    {
        arr[i] = 0;

        return 0;
    }
    else
    {

        arr[i] = rem % 2;
        i += 1;
        return getRem((int)rem / 2);
    }
}