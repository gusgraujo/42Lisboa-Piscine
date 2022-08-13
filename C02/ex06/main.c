
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char str_src[]	= "ASDFADSF";
	char str_dest[]	= "aalut  \n";
	int i;

	i = 	ft_str_is_printable(str_src);
	printf("%d \n", i);
	i = 	ft_str_is_printable(str_dest);
	printf("%d \n", i);

	return (0);
}