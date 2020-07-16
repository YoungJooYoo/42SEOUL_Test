#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split(char *str, char *charset);

void do_test(char* str, char* charset)
{
	char	**array;
	int		i;

	array = ft_split(str, charset);
	i = 0;
	while (array[i])
	{
		printf("'%s' (len=%d)\n", array[i], (int)strlen(array[i]));
		i++;
	}
}

int main(void)
{
	do_test(",1,2,3", ",");
	do_test("Hello.,World,.!!KOKO!ZZZ.Hello.Good.World!KK!ZORO,Good", ",.!");
	do_test("abcakaabcaakaabce", "bck");
	do_test("|---AA-|GoogooGooGoo|aaaa-| Hello World Good| ^^|Nice Boat!", " |-");
	do_test("               ", "     ");
	do_test("  \t ", " \t");
	return 0;
}
