#include<stdio.h>
#include<math.h>
int a;

int hamNhap(int &a)
{
    printf("Nhap vao so a: ");
    scanf("%d", &a);
}

int hamTinh(int a)
{
    int a1, a2, a3;
    a1 = pow(a, 2);
    a2 = pow(a, 3);
    a3 = pow(a, 4);
    printf("a^2 = %d\n", a1);
    printf("a^3 = %d\n", a2);
    printf("a^4 = %d\n", a3);

}

int main()
{
    hamNhap(a);
    hamTinh(a);
}