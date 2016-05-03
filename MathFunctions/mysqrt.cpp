#include "MathFunctions.h"
#include <math.h>

float mysqrt(float input) {
  if (input < 0)
    return 0;
  return sqrt(input);
}