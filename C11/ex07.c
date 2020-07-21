#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		s1++;
		s2++;
	}
	return (0);
}

int main(void)
{
	char *tab[] = {
		"Hello hello hello",
		"Hello 11234",
		"",
		"Go Thourh",
		"134",
		"!!!!!",
		"\?!\?!\?!\?\?!\?!\?!",
		"::*#$@Hell",
		"42 Seoul La Piscine",
		"dk whfflek",
		"anjsrk tmftmf whfflsmsrj rkxdmsep zz",
		"gma ;;",
		0
	};
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
