int main(int argc, int **argv)
{
int A, B;
int C, D, E, F;
printf ("������� ����������� ������� �� ���������\n");
printf ("========================================\n\n");
printf ("�������� ��� ����� ������ : ");
scanf ("%d",&A);
printf ("�������� �� ������� ������ : ");
scanf ("%d", &B);
C = A + B;
D = A - B;
E = A * B;
F = A / B;
printf ("�������� : %d\n", C);
printf ("������� : %d\n", D);
printf ("�������� : %d\n", E);
printf ("������ : %d\n", F);
return 0;
}
