/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:47 by jofilipe          #+#    #+#             */
/*   Updated: 2022/11/29 16:57:58 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*memalloc;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	memalloc = malloc(sizeof(char) * (len + 1));
	if (!memalloc || !s1)
		return (0);
	if (s1 && !s2)
		return ((char *) s1);
	while (s1[i])
	{
		memalloc[i] = s1[i];
		i++;
	}
	while (s2[j])
		memalloc[i++] = s2[j++];
	memalloc[i] = '\0';
	return (memalloc);
}
