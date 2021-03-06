/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:14:53 by achambon          #+#    #+#             */
/*   Updated: 2017/01/06 14:20:22 by achambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapchar(char *a, char *b)
{
	char *tmp;

	if (!a || !b)
		return ;
	*tmp = *b;
	*b = *a;
	*a = *tmp;
}
