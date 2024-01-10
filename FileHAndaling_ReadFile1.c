#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
int Ret=0;

    fd = open("Marvellous.txt", O_RDWR | O_APPEND);

Ret=read(fd,Arr,10);//(Kashatun Vachayche,kashat  vachaayche ,kiti wachayche)



printf("%d bytes gets written in the file \n",Ret);
printf("Data is : %s \n",Arr);

    close(fd);
    return 0;
}

// gcc FileHAndaling_ReadFile1.c -o myexe

