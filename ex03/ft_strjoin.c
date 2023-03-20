/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:08:51 by rluiz             #+#    #+#             */
/*   Updated: 2023/03/20 13:34:35 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	get_final_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	total_length = get_final_length(size, strs, sep);
	result = malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strncat(result, strs[i], ft_strlen(strs[i]));
		if (i < size - 1)
			ft_strncat(result, sep, ft_strlen(sep));
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "world", "42", "Norm", "testing"};
	int size = sizeof(strs) / sizeof(strs[0]);
	char *sep = ", ";
	char *result;

	result = ft_strjoin(size, strs, sep);

	printf("Joined strings: %s\n", result);

	free(result);

	return 0;
}*/
