/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:27:30 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:56:02 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algo5(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	ft_algo5_push_min5(data);
	ft_algo5_push_min4(data);
	if (data->b->content < data->b->next->content)
		sb(data, 1);
	position_min = ft_find_min(data->a, 3);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count != 0)
	{
		rra(data, 1);
		count--;
	}
	if (data->a->content > data->a->next->content)
		sa(data, 1);
	pa(data);
	pa(data);
	pa(data);
}

void	ft_algo5_push_min5(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	position_min = ft_find_min(data->a, 5);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count != 0)
	{
		rra(data, 1);
		count--;
	}
}

void	ft_algo5_push_min4(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	position_min = ft_find_min(data->a, 4);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count != 0)
	{
		rra(data, 1);
		count--;
	}
}
