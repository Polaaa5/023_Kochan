#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *pf_1, 
	FILE *pf_2;
	int k_1, k_2;

	if(argc != 3)
	{
		fprintf(stderr, "enter the: %s file_one_name file_two_name \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((pf_1 = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "open error %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	if((pf_2 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "open error %s", argv[2]);
		exit(EXIT_FAILURE);
	}

	while(1)
	{
		while((k_1 = getc(pf_1)) != '\n')
		{
			putc(k_1, stdout);
			if(k_1 == EOF)
				break;
		}
		while((k_2 = getc(k_2)) != '\n')
		{
			putc(k_2, stdout);
			if(k_2 == EOF)
				exit(EXIT_SUCCESS);
		}
		printf("\n");
	}

	if((fclose(k_1)) != 0)
		fprintf(stderr, "close error %s\n", argv[1]);

	if((fclose(k_2)) != 0)
		fprintf(stderr, "close error %s\n", argv[2]);

	return 0;
}