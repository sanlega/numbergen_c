/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:30:54 by slegaris          #+#    #+#             */
/*   Updated: 2023/10/17 03:46:28 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_H
# define RANDOM_H
# include <stdio.h>
# include <stdlib.h>

void	ptr_to_hex(void *ptr, char *str);
int		is_number_repeated(int new_number, int *output, int count);

#endif
