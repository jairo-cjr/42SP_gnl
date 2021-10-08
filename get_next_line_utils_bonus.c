/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 06:50:44 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/07 11:34:25 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*ptr_src;

	ptr_src = (char *) str;
	while (*ptr_src != (char) c)
		if (*ptr_src++ == 0)
			return (NULL);
	return ((char *)ptr_src);
}

size_t	ft_strlen(const char *str)
{
	size_t		size;
	const char	*s;

	size = 0;
	s = str;
	while (*s++)
		size++;
	return (size);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr_s;

	len = ft_strlen(s) + 1;
	ptr_s = (char *)malloc(sizeof(char) * len);
	if (ptr_s == NULL)
		return (NULL);
	ft_strlcpy(ptr_s, s, len);
	return (ptr_s);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = -1;
	src_len = ft_strlen(src);
	if (!dest || !src)
		return (0);
	while (src[++i] && i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (src_len);
}
