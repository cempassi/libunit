/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 13:27:55 by cempassi          #+#    #+#             */
/*   Updated: 2018/12/02 17:32:25 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# define TEST(x) ((t_test *)(to_test->data))->x
# include "libft.h"

void	init_signal_catcher(void);
int 	run_test(t_list **testList);
void	load_test(t_list **lst, char *name, int (*f)(void));

typedef struct	s_test{
	char	*name;
	int		(*test)(void);
}				t_test;
#endif
