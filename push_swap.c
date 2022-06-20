/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:48:13 by ekeen-wy          #+#    #+#             */
/*   Updated: 2022/06/20 15:00:46 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print(t_stack_info *stack_i)
{
	t_list	*tempnode;
	t_list	*lst;

	lst = stack_i -> stack_a;
	while (lst != NULL)
	{
		tempnode = lst;
		printf("%d\n", tempnode -> content);
		lst = tempnode -> next;
	}
}

void	push_swap(t_stack_info *stack_i)
{
	int	size;

	size = stack_i -> array_size;
	if (size == 2)
		sa(stack_i, 1);
	else if (size == 3)
		sort_three(stack_i);
	else if (size == 5)
		sort_five(stack_i);
	else if (size > 5 && size <= 100)
		sort_big(stack_i, 4);
	else if (size > 100)
		sort_big(stack_i, 10);
}
