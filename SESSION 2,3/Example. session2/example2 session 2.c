#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char abc;
	printf (" gia tri abc/n");
	scanf ("%c", &abc);
	int xyz;
	printf (" gua tri xyz /n");
	scanf ("%d", &xyz);
	float length;
	printf ("gia tri length /n");
	scanf ("%f", &length);
	double area;
	printf ("gia tri area /n");
	scanf ("%lf", &area);
	long liteyrs;
	printf ("gia tri liteyrs /n");
	scanf ("%ld", &liteyrs); 
	short arm;
	printf ("gia tri arm /n");
	scanf ("%d", &arm);
	
	printf ("gia tri abc: %c /n", abc);
	printf ("gia tri xyz: %d /n", xyz);
	printf ("gia tri length: %f /n", length);
	printf ("gia tri area: %lf /n", area);
	printf ("gia tr liteyrs: %ld /n", liteyrs);
	printf ("gia tri arm: %d /n", arm);
	
	return 0;
}
