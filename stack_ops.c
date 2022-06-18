/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:58:45 by ekeen-wy          #+#    #+#             */
/*   Updated: 2022/06/19 00:09:59 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_top(t_stack_info *stack_i, int (*f)(t_stack_info *s, int i), int j)
{
	while (stack_i -> steps[TOP] - 1 > 0)
	{
		(*f)(stack_i, j);
		stack_i -> steps[TOP]--;
	}
}

void	push_bot(t_stack_info *stack_i, int (*f)(t_stack_info *s, int i), int j)
{
	while (stack_i -> steps[BOTTOM] > 0)
	{
		(*f)(stack_i, j);
		stack_i -> steps[BOTTOM]--;
	}
}