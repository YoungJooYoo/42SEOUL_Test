#include <stdio.h>

int		ft_is_prime(int nb);
int main(void)
{
	for (int i = -4; i <= 100; i++)
		printf("is_prime(%d) = %d\n", i, ft_is_prime(i));
}
