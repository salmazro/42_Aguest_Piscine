unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int 			size_dest;
	int 			size_src;
	int 			j;
	unsigned int 	i;

	size_dest = 0;
	size_src = 0;
	j = 0;
	i = 0;
	while (dest[size_dest] != 0)
		size_dest++;
	while (src[size_src] != 0)
		size_src++;
	i = size_dest;
	while (src[j] != 0 && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (size_dest + size_src - 1);
}
