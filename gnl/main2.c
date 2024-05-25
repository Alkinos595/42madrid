/*
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>


int main(int argc, char const *argv[])
{
    int fd;

    fd = open(argv[1], O_RDONLY);

    char *line =  get_next_line(fd);

    printf("%s", line);
    free(line);
    line = get_next_line(-1);

    printf("%s", line);
    free(line);

    return 0;
}
*/