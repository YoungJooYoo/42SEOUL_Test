#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_compare(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int sorted[] = {10, 30, 56, 1235, 6546, 10345};
	int not_sorted[] = {10, 30, 56, 10345, 1235, 6546};
	printf("%d\n", ft_is_sort(sorted, 6, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted, 6, &ft_compare));
	return (0);
}
