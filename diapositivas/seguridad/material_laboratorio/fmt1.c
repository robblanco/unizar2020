#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

#define BUFLEN 100

int main(int argc, char *argv[])
{
    char s[BUFLEN], name[BUFLEN];
    struct timeval tv;
    gettimeofday(&tv, NULL); // get current time for seed
    srand(tv.tv_usec);  // initialize random seed

    int canary1 = 0x0C0FFEE0, 
            random_key = rand(), 
            canary2 = 0xF00DF00D;

    // get username, and show it
    printf("Insert your name to continue: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = 0x00;
    sprintf(s, "Hello, %s! Take your best guess: ", name);
    printf(s);

    // get user number
    fgets(s, sizeof(s), stdin);
    int user_guess = atoi(s);

    if(random_key == user_guess)
        printf("#### WE HAVE A WINNER! ####\n");
    else
        printf("No luck this time :(. Try again!\n");

    return 0;
}
