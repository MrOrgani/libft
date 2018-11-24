/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 19:20:41 by morgani           #+#    #+#             */
/*   Updated: 2018/11/22 14:46:36 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		if (!(tmp->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(tmp->content, (void*)content, content_size);
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
