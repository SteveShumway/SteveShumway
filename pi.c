#include <stdio.h>

/*
 * Compute Pi using the Gregrory & Leibniz formual. Note, I chode to
 * multipy the sequence by 4 because the sum will actually generate
 * a number that looks like Pi without fooling around with it.
 */

int main()
{
  int k;
  double denom = 1.0;
  double sum = 0.0;
  double term;
  double sign = 1.0;
  printf("Pi test.\n" );

  for(int k = 1; k < 100000; k += 2 )
    {
      term = (4.0 / denom) * sign;
      sum += term;
      denom = k;
      denom += 2.0;
      printf("sum = %lf\n", sum);
      sign *= (-1.0);
    }
}
