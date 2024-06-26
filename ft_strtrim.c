/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vbusekru <vbusekru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 19:03:27 by vbusekru      #+#    #+#                 */
/*   Updated: 2023/11/02 14:30:48 by vbusekru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
removes specified leading and trailing characters
from a given string

Input
1. `s1`: The string to trim
2. `set`: The set of characters to remove from
the beginning and end of `s1`

Output
1. A new string with leading and trailing characters removed

Notes:
setcheck:
1. checks if delimiter (c) is present in the array (set)
2. returns 1. if c was found, else 0

strtrim:
1. first trims characters from the beginning of the string,
while s1[start] is not '\0' and the delimiter is found
2. trims from the end, as long as start > end and the
delimiter is found
3. allocates memory for the trimmed string and copies
the characters from the oriignal string to the new string
4. returns new string
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimstr;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	trimstr = (char *)ft_calloc((end - start + 1), sizeof(char));
	if (!trimstr)
		return (NULL);
	ft_strlcpy(trimstr, (s1 + start), (end - start + 1));
	return (trimstr);
}

// int	main(void)
// {
// 	char const	*str1 = "***Hello, world.**";
// 	char const	*set = "*";
// 	char		*result;

// 	result = ft_strtrim(str1, set);
// 	if (result == NULL)
// 		printf("Allocation failed.");
// 	else
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }