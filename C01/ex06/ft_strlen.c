/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:39:13 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 10:34:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void ft_putnbr(int i);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
      i++;
    }
return (i);
}
