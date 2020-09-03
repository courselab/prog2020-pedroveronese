/* m011.c - Count words.

   This program takes the name of an ASCII text file passed as a command 
   line argument, and outputs the number of words in this file. A word is 
   a sequence of alphabetic characters delimited by blanks. A sample text 
   file i011.txt is provided for convenience (should you desire to test with
   another text file, make sure it is in pure ASCII format, not UTF-8 or 
   other milti-byte format.

   E.g.

      command line    : m011 i011.txt
      expected output : 98

   Directions:

      Please, edit function wordcount();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m011 <filename>\n"

/* Return the number of words in ascii text file 'filename'.*/

int wordcount (char *filename)
{
   FILE *fp;
    int n;
    int count = 0;
    int palavra;
    fp = fopen (filename, "r");
    
     while ((n = fgetc(fp)) != EOF) 
     {
         if ((palavra == 0 && n == 32) || (palavra == 0 && n == 10))
         {
            count++;
            palavra = 1;
         }

         else
         {
           if ((palavra == 1 && n != 32) || (palavra == 1 && n != 10))
           {
             palavra = 0;
           }
         }
     }
  return count;
  fclose(fp);
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  int g;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }
  
  n = wordcount (argv[1]);

  printf ("%d\n", n);
  
  return 0;
}
