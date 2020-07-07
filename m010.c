/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int total;
  if (month == 1)
  {
    total == day;
  }
  if (month == 2)
  {
    total = day + 31;
  }
  if ( month == 3)
  {
    total = day + 60;
  }
  if ( month == 4)
  {
    total = day +91;
  }
  if (month == 5)
  {
    total = day + 121;
  }
  if (month == 6)
  {
    total = day + 152;
  }
  if (month = 7)
  {
    total = day + 182;
  }
  if (month = 8)
  {
    total = day + 213;
  }
  if (month = 9)
  {
    total = day + 244;
  }
  if (month = 10)
  {
    total = day + 274;
  }
  if ( month = 11)
  {
    total = day +305;
  }
  if (month = 12)
  {
    total = day + 335;
  }
int t;
t = total;

  if (t%7 == 0)
  {
     return 2;
  }
  if (t%7 == 1)
  {
     return 3;
  }
  if (t%7 == 2)
  {
    return 4;
  }
  if (t%7 == 3)
  {
    return 5;
  }
  if (t%7 == 4)
  {
    return 6;
  }
  if (t%7 == 5)
  {
    return 0;
  }
  if (t%7 == 6)
  {
    return 1;
  }
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
