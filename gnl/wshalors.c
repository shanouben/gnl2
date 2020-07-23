int		ft_strnchr(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	char *str;
	str = "wsh alors \n whs alors";
	printf("%d", ft_strnchr(str));
	return (0);
	}