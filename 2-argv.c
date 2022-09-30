#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
int i;
	printf("argc =%d\n",argc);
	printf("The Content of argv[]\n");
for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n",i,argv[i]);
	}	
	    return (0);
}

