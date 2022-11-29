/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:47:51 by jofilipe          #+#    #+#             */
/*   Updated: 2022/11/29 16:55:16 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memalloc;

	memalloc = malloc(nmemb * size);
	if (!memalloc)
		return (NULL);
	ft_bzero(memalloc, nmemb * size);
	return (memalloc);
}
