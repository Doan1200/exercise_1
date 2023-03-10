#include <stdio.h>
#include <math.h>
int a[10], n, i;
int tong = 0;
int chay = 0;

void hamNhap(int x[10], int &n)
{
    printf("Nhap vao so phan tu mang: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void hamTinh(int x[10], int n)
{
    for(i = i-1; i >=0; i--)
    {
        tong += pow(2, chay)*a[i];
        chay++;
    }
}

int main()
{
    hamNhap(a, n);
    hamTinh(a, n);
    if(tong <10 || tong >15)
    {
         printf("Tong = %d", tong);
    }
    else
    {
        printf("So HEX = ");
        switch (tong)
        {
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F");
        }
    }
}