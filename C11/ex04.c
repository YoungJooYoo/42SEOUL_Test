#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_compare(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int sorted1[] = {10, 30, 56, 1235, 6546, 10345};
	int sorted2[] = {10345, 6546, 1235, 56, 30, 10};
	int not_sorted1[] = {10, 30, 56, 3, 10345, 1235, 6546};
	int not_sorted2[] = {6546, 1235, 10345, 3, 56, 30, 10};
	printf("%d\n", ft_is_sort(sorted1, 6, &ft_compare));
	printf("%d\n", ft_is_sort(sorted2, 6, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted1, 6, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted2, 6, &ft_compare));
	return (0);
}
