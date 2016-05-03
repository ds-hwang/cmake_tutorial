// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc, char* argv[]) {
  if (argc < 2) {
    fprintf(stdout, "%s Version %d.%d\n", argv[0], Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }

  double inputValue = atof(argv[1]);

#ifdef USE_MYMATH
  double outputValue = mysqrt(inputValue);
#else
  double outputValue = sqrt(inputValue);
#endif

  // if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  double result = exp(log(inputValue)*0.5);
  fprintf(stderr, "The exp(log(%g)) is %g\n", inputValue, result);
#endif // otherwise use an iterative approach

  fprintf(stdout, "The square root of %g is %g\n", inputValue, outputValue);
  return 0;
}
