/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <danielpe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:57:36 by danielpe          #+#    #+#             */
/*   Updated: 2024/11/03 19:47:14 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen (s1) -1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	result = malloc (len + 1);
	if (!result)
		return (NULL);
	ft_memcpy (result, s1 + start, len);
	result[len] = '\0';
	return (result);
}
