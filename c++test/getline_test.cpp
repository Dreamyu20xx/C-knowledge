#include <stdio.h>
#include <malloc.h>

int main()
{
	ssize_t len;
	char *line;
	size_t n = 0;
	len = getline(&line,&n,stdin);
	printf("%s",line);
	if(line)
	{
		printf("free");
		free(line);
	}

	return 0;
}
