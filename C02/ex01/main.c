
#include <stdio.h>
#include <unistd.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char str_src[]	= "Hellooooooooooooo";
	char str_dest[]	= "Salut";

	ft_strncpy(str_dest, str_src, 5);
	ft_putstr(str_src);
	printf("\n");
	ft_putstr(str_dest);
	return (0);
	
	
}