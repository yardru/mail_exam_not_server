#include <iostream>
#include <unistd.h>

int main(int argc, char **argv)
{
    char server[] = "/home/box/server";
    if (argc < 7)
        return 1;

    execlp(server, server, argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], nullptr);

    perror("open server error");

    return 0;
}