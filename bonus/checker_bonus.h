/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:54:32 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/23 16:03:39 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*next;

}t_list;

int		check_errore(char **str, int x);
int		ft_atoi(const char *str);
int		check_sort(char **str, int x);
//
void	swap_node(t_list **stack);
void	swap_tow(t_list **list_a, t_list **list_b);
void	push_to_a(t_list **list1, t_list **list2);
void	push_to_b(t_list **list1, t_list **list2);
void	rotate_down(t_list **list);
void	rotate_down_tow(t_list **list_a, t_list **list_b);
void	rotate_up(t_list **list);
void	rotate_up_tow(t_list **list_a, t_list **list_b);
//
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
//size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*read_line(char *str);
char	*next_line(char	*str);
char	*ft_strjoin(char *start, char *buff);
int		chek_n(char *s);
int		get_n(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//
t_list	*get_arg(char **str, int count);
//
int		cou_args(char **str, int x);
char	*args(char **str, int l);
t_list	*ft_lstnew(int content);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	free_s(char **s);
int		git_count(t_list *ll);
//
void	ft_lstclear(t_list **lst);

#endif
