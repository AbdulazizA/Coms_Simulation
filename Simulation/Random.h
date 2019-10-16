#include <stdio.h>
#include <math.h>

extern long A;
extern long B;
extern long M;
extern long SEED;

double generateNextUniform();
double generateNextGaussian(double mean, double var);
int generateNextSymbol();