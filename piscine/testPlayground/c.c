#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i = 1;
	int n = 0;
	printf("Cantidad de argumentos: %d \n", argc);
	if(argc<2){
		printf("No hay argumentos");
	}
	else
	{
		while(i < argc)
		{
			n = 0;
			while(argv[i][n]!='\0')
			{
				write(1, &argv[i][n], 1);
				n++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return 0;
}

