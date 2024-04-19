/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:59:54 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 19:36:55 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*next;

}t_list;

void	ft_lstiter(t_list *lst, void (*f)(int, int));
t_list	*ft_lstnew(int content);
//
void	swap_node(t_list **list, char c);
//void swap_tow(t_list **list_a,t_list **list_b);
//
void	rotate_up(t_list **list, char c);
void	rotate_down(t_list **list, char c);
//
void	push_to_a(t_list **list1, t_list **list2);
void	push_to_b(t_list **list1, t_list **list2);
//
void	rotate_down_tow(t_list **list_a, t_list **list_b);
void	rotate_up_tow(t_list **list_a, t_list **list_b);
//
int		ft_atoi(const char *str);
t_list	*get_arg(char **str, int count);
int		*nod_sort(t_list *list);
int		git_count(t_list *ll);
void	add_index(t_list **list);
int		check_if_range(t_list *list, int i, int s);
//
void	part_one(t_list **stack_a, t_list **stack_b, int x, int ii);
void	part_tow(t_list **stack_a, t_list **stack_b);
//
void	ft_lstclear(t_list **lst);
//int	get_operations(int ii, char **arc, int arv);
//int	get_i(int max, char **arc, int arv);
//
int		check_errore(char **str, int x);
int		check_sort(char **str, int x);
//
char	**ft_split(char const *s, char c);
//
char	*args(char **str, int l);
int		cou_args(char **str, int x);
//
size_t	ft_strlen(const char *s);
#endif