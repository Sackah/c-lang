#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("No arguments provided\n");
    }
    else
    {
        printf("Arguments provided: %d\n", argc);
        for (int i = 1; i < argc; i++)
        {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }
}