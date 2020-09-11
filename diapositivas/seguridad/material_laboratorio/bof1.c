#include <stdio.h>

#define BUFLEN 256

void secret()
{
    printf("YOU WIN!\n");
}

void echo()
{
    char buffer[BUFLEN];

    printf("Type your input:\n");
    scanf("%s", buffer);
    printf("Input given: %s\n", buffer);    
}

int main()
{
    echo();

    return 0;
}
