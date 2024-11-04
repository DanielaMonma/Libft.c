/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <danielpe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:28:48 by danielpe          #+#    #+#             */
/*   Updated: 2024/11/03 14:56:11 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	elem_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > 0 && nmemb > ((size_t)-1) / size)
	{
		return (NULL);
	}
	elem_size = nmemb * size;
	ptr = malloc(elem_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset (ptr, 0, elem_size);
	return (ptr);
}
