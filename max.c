#include <stdio.h>

int main (int NoP, char **Params)
{
    int a, b, c;
    int Max;
    printf ("������ �������� �������\n\n");
    printf ("�������� ��� ����� ������   : ");
    scanf ("%d", &a);
    printf ("�������� ��� ������� ������  : ");
    scanf ("%d", &b);
    printf ("�������� ��� ����� ������   : ");
    scanf ("%d", &c);
    Max = a;
    if (b > Max)
        Max = b;
    Max = (c > Max)? c: Max;
    printf ("� ����������� ����� � %d ��� �������:\n", Max);
    if (Max == a) 
        printf("  1��\n");
    if (Max == b)
        printf("  2��\n");
    if (Max == c)
        printf("  3��\n");
    return 124;
}
