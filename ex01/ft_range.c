/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:31:18 by rluiz             #+#    #+#             */
/*   Updated: 2023/03/20 11:17:30 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	tab[max - min] = '\0';
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	int	*tab;
	int	i;
	int	max;
	int	min;
	
	min = atoi(av[1]);
	max = atoi(av[2]);
	tab = ft_range(min, max);
	if (tab == NULL)
		return ('\0');
	i = 0;
	while (i < max - min)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
