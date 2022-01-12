/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 16:31:06 by yplag             #+#    #+#             */
/*   Updated: 2015/03/05 10:06:01 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "../libft/inc/libft.h"

typedef struct	s_env
{
	int		flag;
	int		ac;
	char	**av;
	int		len_a;
	int		len_b;
	int		*tab_a;
	int		*tab_b;
	int		*sort;
	int		count;
	int		nbr_arg;
}				t_env;

void			struct_init(int ac, char **av, t_env *e, int flag);
void			tri_tab(int	*tab, int size_tab);
void			print(t_env *e);
void			print_tab_a(t_env *e);
void			print_tab_b(t_env *e);
void			sa(t_env *pile, int both);
void			sb(t_env *pile, int both);
void			ss(t_env *pile);
void			r_a(t_env *e, int both);
void			r_b(t_env *e, int both);
void			rr_a(t_env *e, int both);
void			rr_b(t_env *e, int both);
void			r_r(t_env *e);
void			rrr(t_env *e);
int				sorted(int *tab, int size_tab);
int				start_or_end(t_env *e, int littlest);
void			p_a(t_env *e);
void			p_b(t_env *e);
void			algo(t_env *e);
void			algo_3(t_env *e);
void			algo_4(t_env *e);
void			algo_1(t_env *e, int i);
void			algo_2(t_env *e, int i);
int				check_nbr_arg(int ac, int flag);
int				check_int_max(char **av, int flag);
int				check_errors(int ac, char **av, int flag);
int				check_double(int ac, char **av, int flag);
int				check_arg_type(char **av, int flag);
void			print_end(t_env *e);
int				get_flag(char **av);
int				check_arg1(char **av, int i, int j);
int				check_arg2(char **av, int i, int j);
int				check_arg3(char **av, int i, int j);
int				check_arg4(void);

#endif
