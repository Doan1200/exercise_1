/* Viết chương trình đọc và 2 số nguyên và in ra kết quả của phép (+), phép trừ (-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, Thuong;
    printf("Nhap vao a: ");
    scanf("%f", &a);
    printf("Nhap vao b: ");
    scanf("%f", &b);
    printf("Tong cua a + b = %.f\n", a+b);
    printf("Hieu cua a - b = %.f\n", a-b);
    printf("Tich cua a * b = %.f\n", a*b);\
    Thuong = (float)a/b;
    printf("Thuong cua a / b = %.f\n", Thuong);



     a = a + b;
     b = a - b;
     a = a - b;
     printf("a = %.f, b = %.f", a, b);
}