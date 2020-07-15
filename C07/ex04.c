#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	do_test(char *nbr, char *base_from, char *base_to)
{
	printf("base_from='%s' base_to='%s'\n", base_from, base_to);
	printf("Result: ");
	char *answer = ft_convert_base(nbr, base_from, base_to);
	if (answer)
	{
		printf("'%s'", answer);
		free(answer);
	}
	else
	{
		printf("NULL!");
	}
	printf("\n");
}

int		main(void)
{
	do_test("!@#$%^&*()", ")!@#$%^&*(", "0123456789");
	do_test("                  +IOOOOOOOOOOOOOOOO", "OI", "01");
	do_test("    +-----+<C<B\"\'\'", "\'\"\?>.<,QWERT ABC", "0123456789ABCDEF");
	do_test("Qa QRRtRRaR ", "aQqR Tt", "0123456789");
	do_test("-_{{}}||_=_}=}{", "=_|{}", "0123456789");
	do_test("D'wyDZr", "ZXCS DF12345;:'\"qwertyas@#$", "0123456789");
	do_test("^$G$M", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= ", "0123456789");
	do_test("!", "!@#$", "012");
	do_test("123456", "123456", "ABCDEFG");
	do_test("1234", "12345-64", "qwertyui");
	do_test("1234", "12345678+", "qwertyuio");
	do_test("", "", "");
	do_test("12345", "", "qwerz");
	do_test("12345", "a12356a7", "");
	do_test("     \t\v\f     +---------++-1235aaa776644", "a123567", "zxcasc");
	do_test("     \n\r\t     +---------++-1235aaa7766"  , "a123567", "asasdasdas");
	do_test("            +----8----++-1235aaa7766", "a123567", "as3ds");
	do_test("            +--------++-1235     !!aaa7766", "0123456789", "ole3456789");
	do_test("  \t  +-----+-<C<B\"\'\'", "\'\"\?>.<,QWERTABCD", "0123456789ABCDEF");
	do_test("12345", "a123567", "asdfqwer\n");
}
