#include<stdio.h>

int main()
{
    int i, n, a[10];
    printf("Nhap vao so thap phan N: ");
    scanf("%d", &n);

    for(i = 0; n>0; i++)
    {
        a[i] = n%16;
        n = n/16;
    }
    for(i = i-1; i>=0; i--)
    {   if(a[i]< 10)
        {
            printf("%d", a[i]);
        }
        if(a[i] == 10)
            printf("A");
        if(a[i] == 11)
            printf("B");
        if(a[i] == 12)
            printf("C");
        if(a[i] == 13)
            printf("D");
        if(a[i] == 14)
            printf("E");
        if(a[i] == 15)
            printf("F");
    }

}