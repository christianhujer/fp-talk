// echo with recursion in C

#include <stdio.h>

static void echo(char *argv[])
{
    if (!argv[0]) {
        printf("\n");
        return; // end recursion
    }
    printf("%s", argv[0]);
    if (argv[1]) printf(" ");
    echo(argv + 1); // recurse
}

int main(int argc, char *argv[])
{
    ++argv, --argc; // skip command name
    echo(argv);
}
