
#include "my_string.h"
#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is - www.tut-orials-point.com - website";
   const char s[2] = "-";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );
      token = strtok(NULL, s);
   }

   return(0);
}


