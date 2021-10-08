/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 06:50:41 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/07 08:30:47 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h> // remover
# include <unistd.h>
# include <stdlib.h>

# ifndef MAX_FD
#  define MAX_FD 256
# endif

# define INT_MAX 2147483647

/**
 * @brief Read the text available on the file descriptor one line at a time
 * until the end of it.
 *
 * @param fd File descriptor to read from.
 * @return char* A line read from a file descriptor. NULL if error or not else
 * to read.
 */
char	*get_next_line(int fd);

/**
 * @brief Duplicates the string pointed by s in a new string
 *
 * @param s Pointer to the start of the string to be copied
 * @return char* A pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char	*ft_strdup(const char *s);

/**
 * @brief Calculates the length of the string
 * pointed to by str, excluding the terminating null byte
 *
 * @param str Pointer to the initial area of the string
 * @return size_t The number of bytes in the
 * string pointed to by str
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Finds the first occurrence of the character c in the string str
 * @param str Pointer to the string memory area
 * @param c Character to be searched inside the string s
 * @return char* A pointer to the matched character
 * or NULL if the character is not found
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief Allocates a newstring, which is the result of the concatenation of
 * ’s1’ and ’s2’.
 *
 * @param s1 The prefix string
 * @param s2 The suffix string
 * @return char* The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * @brief copies up to (size - 1) characters from the NUL-terminated string src
 * to dst, NUL-terminat‐ing the result
 *
 * @param dest Pointer to the destination area of memory
 * @param src  Pointer to the source area of memory
 * @param size BUffer size in bytes
 * @return size_t The length of src
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Allocates a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s		The string from which to create the substring.
 * @param start	The start index of the substring in the string’s’.
 * @param len	The maximum length of the substring.
 * @return char* The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
