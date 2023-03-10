#include<stdio.h>

int main()
{
    int ngay, thang, nam;
    printf("Nhap vao ngay/ thang/ nam: ");
    scanf("%d%d%d", &ngay, &thang, &nam);

    printf("%.2d/%.2d/%.2d", ngay, thang , nam);
}