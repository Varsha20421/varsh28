#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[])
{
    float a;
    printf("\nIn the sysPrg6.c\n");

    if(strcmp(argv[1],"Square")==0)
    {
        a = atoi(argv[2]) * atoi(argv[3]);
        printf("Area of Square = %.2f",a);
    }

    else if(strcmp(argv[1],"Rectangle")==0)
    {
        a = atoi(argv[2]) * atoi(argv[3]);
        printf("Area of Rectangle = %.2f",a);
    }

    else if(strcmp(argv[1], "Triangle")==0)
    {
        a = 0.5 * atoi(argv[2]) * atoi(argv[3]);
        printf("Area of Traiangle = %.2f",a);
    }

    else
    {
        printf("Enter Square or Rectangle or Traingle");
    }

//  execl(argv[1],argv[2],argv[3],(char *)0);
  //  printf("\nThis line will not printf\n\n");
	printf("\n\n");
    return 0;
}

