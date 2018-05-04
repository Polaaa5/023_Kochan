#include <stdio.h>

int main (void)
{
	FILE *new_file = fopen (file.txt, "r");
	char buffer[101], file[101];
	char p;
	int flag = 1;

	printf("File: ");
	scanf("%100s", file);

	if (*new_file) == NULL) {
		printf("Unable to open the file: %s\n", file);
		return 1;
	}

	while (flag) {
		p = getchar();
		for (int i = 0; i < 20; i++) {
			if (fgets(buffer, 80, new_file) != NULL)
				printf("%s", buffer);
			else
				flag = 0;
		}

		do {
			p = getchar();
		} while (p == '\n');

		if (p == 'q')
			flag = 0;
	}

	fclose (new_file);
	return 0;
}