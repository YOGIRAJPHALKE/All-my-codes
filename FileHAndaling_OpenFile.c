#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = 0;
    fd = open("Marvellous.txt", O_RDWR);

    if (fd != -1)
    {
        printf("File is successfully Opened with FD : %d \n", fd);
    }
    close(fd);
    return 0;
}

// gcc FileHAndaling_OpenFile.c -o myexe

// o_RDONLY : Read
// o_WRONLY : WriteF
// o_RDWR   : Read+write