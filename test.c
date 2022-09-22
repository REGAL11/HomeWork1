#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func_f(double var)
{

  double result = exp(-1 * fabs(var)) * sin(var);

  return result;

}

double func_g(double var)
{

  double result = exp(-1 * fabs(var)) * cos(var);

  return result;

}

int main(int argc, char** argv)
{

    if(argc < 2) return -1;

    double x = atof(argv[1]);

    printf("x: %lf | f(x): %lf | g(x): %lf \n",x,func_f(x),func_g(x));

    return EXIT_SUCCESS;
}

