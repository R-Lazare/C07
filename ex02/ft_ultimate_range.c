/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:27:15 by rluiz             #+#    #+#             */
/*   Updated: 2023/03/20 11:39:30 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		return (-1);
	}
	return (max - min);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	int	*range;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	size = ft_ultimate_range(&range, min, max);

	if (size == -1)
	{
		printf("Error: memory allocation failed\n");
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
	}
	return (0);
}
*/
