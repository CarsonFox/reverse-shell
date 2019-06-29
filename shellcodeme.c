#include <stdio.h>
#include <stdlib.h>


void welcome(char *name)
{
    printf("Welcome, ");
    printf(name);
}

void authenticate()
{
    char password[50];
    printf("\nEnter your password: ");
    fflush(stdout);

    scanf("%s",password);
    printf("Great to see you. Now, go away!\n");
}

int main(int argc, const char *argv[])
{
    char name[50];

    puts("Enter your name:");
    fflush(stdout);

    fgets(name,sizeof(name),stdin);
    welcome(name);

    authenticate();

    return 0;
}
