/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 17:05:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/04 17:12:53 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  // on ne calcule pas les pwr > 17 car cela depasse le int max
*/

long long static ft_abs_ll(long long n)
{
	return (n < 0 ? -n : n);
}

long long	ft_pwr(long long n, size_t pwr)
{
	long long tmp;

	tmp = n;
	if (pwr-- == 0)
		return (1);
	while (pwr--)
	{
		if (ft_abs_ll(n) * ft_abs_ll(tmp) < ft_abs_ll(n))
			return (0);
		n = n * tmp;
	}
	return (n);	
}
