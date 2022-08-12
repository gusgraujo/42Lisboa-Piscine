
#include <stdio.h>
#include <unistd.h>


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

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
	char str_src[] = "salut,";
	char str_dest[]	= "Salut";
	unsigned int num;
	num = ft_strlcpy(str_dest,str_src,6);

	printf("\n");
	
	printf("Numero :%d",num);
	printf("\n");
	ft_putstr(str_src);
	printf("\n");
	ft_putstr(str_dest);
	return (0);
}