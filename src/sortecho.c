// vim: foldmethod=syntax
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int cmpstr(const void *o1, const void *o2)
{
    char *const *s1 = o1;
    char *const *s2 = o2;
    return strcmp(*s1, *s2);
}

static void echo(char *argv[])
{
    if (!argv[0]) {
        printf("\n");
        return;
    }
    printf("%s", argv[0]);
    if (argv[1])
        printf(" ");
    echo(argv + 1);
}

int main(int argc, char *argv[])
{
    ++argv, --argc; // skip command name
    // qsort from stdlib is a higher order function.
    qsort(argv, argc, sizeof(char *), cmpstr);
    echo(argv);
}
