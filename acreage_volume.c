#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	system("chcp 1253");
	int mikos,emvado_kuvou,ogkos_kuvou;
	float ogkos_sferas,emvado_sferas;

	printf ("����������� ��� ���������� ��� ��� �����.\n\n");
	printf ("����� �� �����: ");
	scanf ("%d", &mikos); 
	emvado_kuvou=6*pow(mikos, 2); 
	ogkos_kuvou=pow(mikos, 3); 
	emvado_sferas=4*PI*pow(mikos, 2);
	ogkos_sferas=(4.0/3)*PI*pow(mikos, 3);
	printf ("\n������� �����: %d\n",emvado_kuvou);
	printf ("����� �����: %d\n", ogkos_kuvou);
	printf ("������� �������: %.3f\n", emvado_sferas);
	printf ("����� �������: %.3f\n", ogkos_sferas);
	
	return 0;
}
