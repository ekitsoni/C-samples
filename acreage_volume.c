#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	system("chcp 1253");
	int mikos,emvado_kuvou,ogkos_kuvou;
	float ogkos_sferas,emvado_sferas;

	printf ("Υπολογισμός της επιφάνειας και του όγκου.\n\n");
	printf ("Μήκος σε μέτρα: ");
	scanf ("%d", &mikos); 
	emvado_kuvou=6*pow(mikos, 2); 
	ogkos_kuvou=pow(mikos, 3); 
	emvado_sferas=4*PI*pow(mikos, 2);
	ogkos_sferas=(4.0/3)*PI*pow(mikos, 3);
	printf ("\nΕμβαδόν κύβου: %d\n",emvado_kuvou);
	printf ("Όγκος κύβου: %d\n", ogkos_kuvou);
	printf ("Εμβαδόν σφαίρας: %.3f\n", emvado_sferas);
	printf ("Όγκος σφαίρας: %.3f\n", ogkos_sferas);
	
	return 0;
}
