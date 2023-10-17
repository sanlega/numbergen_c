/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_to_random.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:54:56 by slegaris          #+#    #+#             */
/*   Updated: 2023/10/17 03:37:26 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random.h"

static unsigned long	next_hash(unsigned long current_hash)
{
	return (current_hash * 6269667103370058243UL + 1);
}

unsigned long	harder_hash(unsigned long hash)
{
	void	*ptr;
	char	*str;
	char	*ptr_str;
	int		c;

	ptr = malloc(1);
	str = malloc(256);
	if (!ptr || !str)
		exit (1);
	ptr_to_hex(ptr, str);
	ptr_str = str;
	c = *ptr_str;
	while (c)
	{
		ptr_str++;
		hash = ((hash << 5) + hash) + c;
		c = *ptr_str;
	}
	return (free(ptr), free(str), hash);
}

unsigned long	simple_hash(void)
{
	unsigned long	hash;
	void			*ptr;
	char			*str;
	char			*ptr_str;
	int				c;

	hash = 3674298;
	ptr = malloc(1);
	str = malloc(256);
	if (!ptr || !str)
		exit (1);
	ptr_to_hex(ptr, str);
	ptr_str = str;
	c = *ptr_str;
	while (c)
	{
		ptr_str++;
		hash = ((hash << 5) + hash) + c;
		c = *ptr_str;
	}
	return (free(ptr), free(str), harder_hash(hash));
}

void	generate_numbers(unsigned long hash, int *output, int n, int *minmax)
{
	int				range;
	int				ij;
	unsigned long	new_hash;
	int				new_number;

	range = minmax[1] - minmax[0] + 1;
	ij = 0;
	new_hash = hash;
	while (ij < n)
	{
		new_number = (new_hash % range) + minmax[0];
		if (!is_number_repeated(new_number, output, ij))
		{
			output[ij] = new_number;
			ij++;
		}
		new_hash = next_hash(new_hash);
	}
}

int	main(int argc, char **argv)
{
	unsigned long	hash_val;
	int				*numbers;
	int				quantity;
	int				i;
	int				minmax[2];

	hash_val = simple_hash();
	quantity = atoi(argv[3]);
	numbers = malloc(quantity * sizeof(int));
	minmax[0] = atoi(argv[1]);
	minmax[1] = atoi(argv[2]);
	if (!numbers && argc)
		exit(1);
	generate_numbers(hash_val, numbers, quantity, minmax);
	i = 0;
	while (i < quantity)
	{
		if (i == quantity -1)
			printf("%d", numbers[i]);
		else
			printf("%d ", numbers[i]);
		i++;
	}
	free(numbers);
	return (0);
}
