
13	int	ft_sqrt(int nb)
14	{
15		int i;
16	
17		i = 1;
18		if (nb <= 0)
19			return (0);
20		while (i <= 46342)
21		{
22			if ((i * i) == nb)
23				return (i);
24			i++;
25		}
26		return (0);
27	}
