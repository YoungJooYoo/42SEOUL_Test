#include <stdio.h>
int	ft_atoi(char* str);
int main(void)
{
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("5678"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-5678"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));

	printf("%d\n", ft_atoi("    +----++-2147483648"));
	printf("%d\n", ft_atoi("+------+0"));
	printf("%d\n", ft_atoi("\t\v----------++5123145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++2123133345"));
	return 0;
}
