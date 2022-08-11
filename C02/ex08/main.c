
#include <stdio.h>
#include <unistd.h>


char	*ft_strupcase(char*str);

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
	char str_src[] = "AUBAY";
	char str_dest[]	= "Salut";
	//int num;
	//num = ft_str_is_lowercase(str_src);
	ft_strupcase(str_src);
	printf("\n");
	//printf("%d",num);
	ft_putstr(str_src);
	return (0);
	
	
}