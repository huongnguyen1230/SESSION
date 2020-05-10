#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int luong = 500000; 
	printf ("luong /n");
	scanf ("%d", &luong);
	
	int tuoi = 20;
	printf ("tuoi/n");
	scanf ("%d", &tuoi);
	
	printf ("luong cua mot mguoi: %d/n", luong);
	printf ("tuoi cua mot nguoi: %d/n", tuoi);
	
	return 0;
}
