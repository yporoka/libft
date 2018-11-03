/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 18:18:11 by yporoka           #+#    #+#             */
/*   Updated: 2018/05/01 18:22:46 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*fresh;

	if (!(fresh = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	fresh = ft_strncpy(fresh, s, n);
	fresh[n] = '\0';
	return (fresh);
}
