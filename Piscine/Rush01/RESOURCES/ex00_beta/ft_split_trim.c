
int get_next_number (char **s, char c)
{
    int num = 0;
    while (**s && **s != c)
    {
        num = num * 10 + (**s - '0');
        (*s)++;
    }
    return (num);
}

int	*ft_split(char *s, char c)
{
	int	*strs;
	int	i;
	int	j;
	int	word_count;

	i = 0;
	j = 0;
	word_count = ft_count_words(s, c);
	strs = (int *)malloc(sizeof(int) * (word_count + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			strs[j++] = get_next_number (&s + i, c);
		}
		else
			i++;
	}
	return (strs);
}