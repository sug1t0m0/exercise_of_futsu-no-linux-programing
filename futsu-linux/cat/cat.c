#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main (int argc, char *argv[]){
    int i;

    if (argc < 2){
        fprintf(stderr, "%s: file name not given\n", argv[0]);
        exit(1);
    }
}
