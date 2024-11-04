/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <danielpe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:37:49 by danielpe          #+#    #+#             */
/*   Updated: 2024/11/03 17:56:14 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	size;

	if (!s)
		return (ft_strdup(""));
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	ft_memcpy (subs, s + start, len);
	subs[len] = '\0';
	return (subs);
}
