#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strstr(char *str, char *to_find);
void do_test(char* str, char* to_find)
{
	printf("Your: %s\n", ft_strstr(str, to_find));
	printf("CStdLib: %s\n", strstr(str, to_find));
}
int main(void)
{
    do_test("", "");
    return 0;
}
