#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabetic;

	alphabetic = 'a';
	while (alphabetic <= 'z')
	{
		write(1, &alphabetic, 1);
		alphabetic++;
	}
}

int	main(){
	ft_print_alphabet();
}