#include <stdio.h>
#include "include/compiler.h"

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr,"\033[1;31mPlease specify input file.\033[0m\n");
        return 1;
    }
    Compiler(argv[1]);
    return 0;
}
