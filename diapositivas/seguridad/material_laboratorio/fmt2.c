#include <stdio.h>

#define BUFLEN 256

void secret()
{
    printf("YOU WIN!\n");
}

void echo()
{
    char buffer[BUFLEN];
    char *buf = 0;

    printf("Type your input: ");

    fgets(buffer, sizeof(buffer), stdin);
    printf("Input given: ");
    printf(buffer);
    printf("\n");
}

int main()
{
    int x, *p = &x; // variable p is a pointer to x

    x = 0xBAADF00D;
    printf("Address of x: 0x%08x\n", &x); // for helping you

    echo();
    if(x == 0x10)
        secret();

    return 0;
}
