/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_negative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:27:56 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/21 09:19:10 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	p;

	p = 0;
	if (n >= 0)
	{
		p = 80;
		write(1, &p, 1);
	}
	else
	{
		p = 78;
		write(1, &p, 1);
	}
}
