#include <stdio.h>

int		ft_find_next_prime(int nb);
int main(void)
{
	for (int i = -4; i <= 257; i++)
		printf("find_next_prime(%d) = %d\n", i, ft_find_next_prime(i));
}
