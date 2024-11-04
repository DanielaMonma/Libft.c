/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <danielpe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:54:48 by danielpe          #+#    #+#             */
/*   Updated: 2024/11/02 21:51:07 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (n == 0 || dest == src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		ft_memcpy(dest_ptr, src_ptr, n);
	}
	else
	{
		while (n--)
		{
		dest_ptr[n] = src_ptr[n];
		}
	}
	return (dest);
}
