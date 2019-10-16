#include "../random.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	int rand_num = 20000;
	double number;
	File * file = fopen("C:\Users\aziza\OneDrive\University\Fifth Year\ELG4176\Simulation Lab\Coms_Simulation\Simulation\Task3\data\randomGaussianOut.dat", "w");
	for (int i = 0; i < rand_num; i++) {
		number = generateNextGaussian(0, 1);
		fprintf(file, "%f \n", number);

	}
	fclose(file);
	return (0);
}