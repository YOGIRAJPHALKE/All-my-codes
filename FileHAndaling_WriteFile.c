#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[]="Marvellous Infosystem";
int Ret=0;

    fd = open("Marvellous.txt", O_RDWR);

Ret=write(fd,Arr,15);//(Kashat lihayche,kay lihayche ,kiti lihayche)
//Ret=write(fd,Arr,strlen(Arr));

printf("%d bytes gets written in the file \n",Ret);

    close(fd);
    return 0;
}

// gcc FileHAndaling_WriteFile.c -o myexe

