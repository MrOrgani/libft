/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 17:05:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/05 19:12:06 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  // on ne calcule pas les pwr > 17 car cela depasse le int max
*/

long long	ft_pwr(long long n, size_t pwr)
{
	long long tmp;

	tmp = n;
	if (pwr-- == 0)
		return (1);
	while (pwr--)
	{
		if (ft_abs(n) * ft_abs(tmp) < ft_abs(n))
			return (0);
		n = n * tmp;
	}
	return (n);	
}
