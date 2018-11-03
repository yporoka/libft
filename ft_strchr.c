/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 16:48:53 by yporoka           #+#    #+#             */
/*   Updated: 2018/05/11 12:32:03 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int ch)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		if (p[i] == (char)ch)
			return ((char *)p + i);
		i++;
	}
	if ((ch == 256 || ch == 0) && p[i] == '\0')
		return ((char *)p + i);
	return (NULL);
}
