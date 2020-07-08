
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
    char text[] = "Hello 42 SEOUL!!";
	char buffer[100];
	char* ret;

	ret = ft_strcpy(buffer, text);
	printf("%s - %d", buffer, (int)buffer - (int)ret);
	printf("%d", (int)ft_strcpy(0, 0));
    return 0;
}

