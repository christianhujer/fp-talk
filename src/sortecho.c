// higher-order functions in C: qsort

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int cmpstr(const void *o1, const void *o2) {
    char *const *s1 = o1;
    char *const *s2 = o2;
    return strcmp(*s1, *s2);
}

static void echo(char *a[]) {
    for (;*a; a++) printf(a[1] ? "%s " : "%s", *a);
    printf("\n");
}

int main(int argc, char *argv[]) {
    ++argv, --argc; // skip command name
    // qsort from stdlib is a higher order function.
    qsort(argv, argc, sizeof(char *), cmpstr);
    echo(argv);
}
