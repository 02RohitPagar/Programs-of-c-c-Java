#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
  unlink("Marvellous.txt");

  printf("The file delted succesfully...");
  
    return 0;
}