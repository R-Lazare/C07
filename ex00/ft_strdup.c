/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:27:31 by rluiz             #+#    #+#             */
/*   Updated: 2023/03/16 15:58:58 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	len;
	char			*dup;

	len = ft_strlen(src) + 1;
	dup = malloc(len);
	if (dup != NULL)
	{
		ft_strncpy(dup, src, len);
	}
	return (dup);
}
/*
int	main(void)
{
    char *str = "hello world";
    char *copy = ft_strdup(str);
    printf("Original string: %s\n", str);
    printf("Copied string: %s\n", copy);

    return 0;
}
*/
