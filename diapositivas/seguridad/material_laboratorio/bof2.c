#include <stdio.h>
#include <string.h>
#include <unistd.h>

void secret()
{
    printf("YOU WIN!\n");
}

void check_argument(char *arg)
{
   char buffer[64];

   strcpy(buffer, arg);
   printf("Your argument is: %s\n", buffer);
}


int main(int argc, char *argv[])
{
   // check args
   if (argc != 2) {
      printf("usage: %s argument\n", argv[0]);
      return 1;
   }
   
   check_argument(argv[1]);
   return 0;
}
