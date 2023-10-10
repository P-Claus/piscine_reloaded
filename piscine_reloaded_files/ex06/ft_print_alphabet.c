void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	character;

	character = 'a';
	while (character <= 'z')
	{
		ft_putchar(character);
		character++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
