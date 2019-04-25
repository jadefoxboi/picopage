#include "common.h"
#include <getopt.h>

char * appname;

int main(int argc, char ** argv) {
    appname = argv[0];
    if(argc < 2) exit_usage();



    return EXIT_SUCCESS;
}