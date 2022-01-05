/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:57:36 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/15 15:22:20 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char	*str)
{
	int	i ;
	int	signe;
	int	n ;

	n = 0 ;
	i = 0 ;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signe *= -1 ;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * signe);
}
int main()
{
	d[20] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(d));
	return 0;
}
