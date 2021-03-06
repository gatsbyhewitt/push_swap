/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:55:42 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 04:57:06 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_rotate_chunk(t_data *data)
{
	int	i;

	data->size_a = data->size_a - data->nombre_trie;
	i = data->nombre_trie;
	while (data->b)
		pa(data);
	if (data->size_a != 0)
	{
		while (i != 0)
		{
			ra(data, 1);
			i--;
		}
	}
}

void	ft_rotate_len(t_data *data, int len)
{
	while (len != 0)
	{
		data->nombre_trie = 0;
		ra(data, 1);
		len--;
		data->nombre_trie++;
		data->size_a--;
	}
}
