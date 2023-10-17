/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:32:17 by slegaris          #+#    #+#             */
/*   Updated: 2023/10/17 03:46:14 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random.h"

void	ptr_to_hex(void *ptr, char *str)
{
	const char		*hex_chars;
	unsigned long	addr;
	int				i;

	hex_chars = "0123456789abcdef";
	addr = (unsigned long)ptr;
	i = sizeof(ptr) * 2 - 1;
	while (i >= 0)
	{
		str[i] = hex_chars[addr & 0xF];
		addr >>= 4;
		i--;
	}
	str[sizeof(ptr) * 2] = '\0';
}

int	is_number_repeated(int new_number, int *output, int count)
{
	int	ij;

	ij = 0;
	while (ij < count)
	{
		if (output[ij] == new_number)
			return (1);
		ij++;
	}
	return (0);
}
