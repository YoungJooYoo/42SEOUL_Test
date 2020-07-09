#include <stdio.h>

int		ft_sqrt(int nb);
int main(void)
{
	for (int i = -4; i <= 100; i++)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
}
