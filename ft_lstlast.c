/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lastlast.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vbusekru <vbusekru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 17:30:03 by vbusekru      #+#    #+#                 */
/*   Updated: 2023/11/04 17:30:03 by vbusekru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
Returns the last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*el1 = ft_lstnew("a");
	t_list	*el2 = ft_lstnew("b");
	t_list	*el3 = ft_lstnew("c");
	t_list	*el4 = ft_lstnew("d");
	t_list	*el5 = ft_lstnew("e");
	t_list	*el6;

	ft_lstadd_front(&el1, el2);
	ft_lstadd_front(&el2, el3);	
	ft_lstadd_front(&el3, el4);	
	ft_lstadd_front(&el4, el5);
	printf("length el5: %d\n", ft_lstsize(el5));
	printf("before el5: %s\n", (char*)el5->content);
	el6 = ft_lstlast(el5);
	printf("last is: %s\n", (char*)el6->content);
	printf(" after el5: %s\n", (char*)el5->content);
	printf("length el5: %d\n", ft_lstsize(el5));
	return (0);
}
*/
