#include<stdio.h>
#define PI  3.14
int R;
float Dtich, Ttich;

int hamNhap(int &R);
int hamTinh(int R);

int main()
{
    hamNhap(R);
    hamTinh(R);
}

int hamNhap(int &R)
{
    printf("Nhap vao ban kinh R: ");
    scanf("%d", &R);
}

int hamTinh(int R)
{
    Dtich = 4*PI*R*R;
    Ttich = (float)4/3*PI*R*R*R;
    printf("Dtich = %.2f\n", Dtich);
    printf("Ttich = %.2f", Ttich);
}