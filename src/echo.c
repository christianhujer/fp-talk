// echo with recursion in C
#include <stdio.h>

static void echo(char *argv[]) {
    if (!argv[0]) { printf("\n"); return; } // stop
    printf(argv[1] ? "%s " : "%s", argv[0]);
    echo(argv + 1); // recurse
}

int main(int argc, char *argv[]) {
    ++argv, --argc; // skip command name
    echo(argv);
}
