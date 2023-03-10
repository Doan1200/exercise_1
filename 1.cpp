// Viet chuong trinh doi he 10 sang he 2
#include<stdio.h>



int main()
{
    int n, a[10], i;
    printf("Nhap vao so thap phan: ");
    scanf("%d", &n);
    for(i = 0; n>0; i++)
    {
        a[i] = n%2;
        n = n/2;
    }
    printf("So nhi phan = ");
    for (i = i - 1; i>=0; i--)
    {
        printf("%d", a[i]);
    }
}