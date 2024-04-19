#include "checker.h"

static void	printt(int p, int pp)
{
	printf("%d %d\n", p, pp);
}

void	ft_lstiter(t_list *lst, void (*f)(int, int))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->value, lst->index);
		lst = lst->next;
	}
}

int sorrrt(t_list **stack_a,t_list **stack_b)
{
    char *str;
    //char **str_tow;
    int x;

    x = 0;

   //str_tow=ft_split(str,'\n');

    while (1)
    {
        str = get_next_line(0);
        if(!str||str[0] =='\0')
            break;
        if(ft_strncmp(str,"sa",2))
            swap_node(stack_a);
        else if(ft_strncmp(str,"sb",2))
            swap_node(stack_b);
        else if(ft_strncmp(str,"ss",2))
            swap_tow(stack_a,stack_b);
        else if(ft_strncmp(str,"rra",3))
            rotate_down(stack_a);
        else if(ft_strncmp(str,"rrb",3))
            rotate_down(stack_b);
        else if(ft_strncmp(str,"rrr",3))
            rotate_down_tow(stack_a,stack_b);
        else if(ft_strncmp(str,"rb",2))
            rotate_up(stack_b); 
        else if(ft_strncmp(str,"ra",2))
            rotate_up(stack_a);     
        else if(ft_strncmp(str,"rr",2))
            rotate_up_tow(stack_a,stack_b);
        else if(ft_strncmp(str,"pa",2))
            push_to_a(stack_b,stack_a);
        else if(ft_strncmp(str,"pb",2))
            push_to_b(stack_a,stack_b);
        else
            return 1;
        x++;
    }
    return 0;
}
int check_sort_node(t_list *list)
{
    while (list)
    {
        if(list->next&&list->value > list->next->value)
            return 1;
        list = list->next;
    }
    return 0;
} 

int main(int arv, char **arc)
{
    t_list *stack_a;
    t_list *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if(check_errore(arc,arv-1))
        return(printf("Error\n"),0);
    else if(check_sort(arc,arv-1))
        return(printf("sooort\n"),0);
	stack_a = get_arg(arc, arv - 1);

    if (sorrrt(&stack_a,&stack_b))
        return(printf("Error\n"),0);    
    if(check_sort_node(stack_a)&&stack_b == NULL)
        printf("ko\n");
    else
        printf("ok\n");

// printf("=========a==========\n");
// ft_lstiter(stack_a,printt);
//    printf("=========b==========\n");
//    ft_lstiter(stack_b,printt);

}