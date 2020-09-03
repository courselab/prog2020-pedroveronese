/* m005.c - Determinant.

   This program reads the integer coefficients of a 3x3 matrix
   and outputs the matrix's determinant. Matrix coefficients
   are read from standard input one line at a time, in the form
   of blank-separated integers.

   E.g.

      command line    : m005
      standard input  : 1 2 3
                        2 1 3
                        3 2 1
      expected output : 12

   Directions:

      Please, edit function determinant();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Return the determinant of a 3x3 integer matrix.*/

int determinant (int m[3][3])
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int r;
 a = m[0][0]*m[1][1]*m[2][2];
 b = m[0][1]*m[1][2]*m[2][0];
 c = m[0][2]*m[1][0]*m[2][1];
 d = -(m[0][2]*m[1][1]*m[2][0]);
 e = -(m[0][0]*m[1][2]*m[2][1]);
 f = -(m[0][1]*m[1][0]*m[2][2]);
 r = a + b + c + d + e + f;
  return r;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a[3][3];
  int det;
  
  /* Read matrix lines. */
  
  scanf ("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
  scanf ("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
  scanf ("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

  det = determinant (a);
  
  printf ("%d\n", det);
  
  return 0;
}
