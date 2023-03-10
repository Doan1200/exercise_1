#include<stdio.h>


int main()
{
    int gio, phut, giay, n;
    printf("Nhap vao so giay: ");
    scanf("%d", &n);
        gio = n/3600;
        phut = (n%3600)/60;
        giay = (n%3600)%60;
    printf("%.2d:%.2d:%.2d", gio, phut, giay);
}