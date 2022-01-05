/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:35:04 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/14 09:29:35 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char	*str, char	*to_find)
{
	int	i ;
	int	j ;

	if (*to_find == 0)
		return (str);
	i = 0 ;
	while (str[i] != '\0')
	{
		j = 0 ;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
