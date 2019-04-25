#include "common.h"
#include <string.h>
int exit_err(int code, char * msg) {
    char output[80] = "Error! ";
    strcat(output, msg);
    puts(output);
    exit(code);
    return 1;
}

int exit_usage() {
    return exit_err(EXIT_FAILURE, "Usage: "PICOPAGE_USAGE);
}