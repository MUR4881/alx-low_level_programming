#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argv, char *argc) {
    int fd;
    char buffer[1024];

    fd = open(argc[argv - (argv - 1)], O_RDONLY | O_BINARY);
    if(fd == -1) {
        printf("Error: Failed to open file.\n");
        return 1;
    }

    read(fd, buffer, sizeof(buffer));
    write(1, buffer, 1024);
    close(fd);

    return 0;
}

