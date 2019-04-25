#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define PICOPAGE_USAGE "app [-options] <filename>"

extern char * appname;

int exit_err(int code, char * msg);

int exit_usage();