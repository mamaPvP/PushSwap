#include "../pushswap.h"

void	pb(t_list **b, t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	if (is_sort_one(*a))
		return ;
	while (tmp && tmp->next)
	{
		if (tmp->num > tmp->next->num)
		{
			break ;
		}
		ft_lstadd_front(b, ft_lstnew(tmp->num));
		tmp = tmp->next;
		free(tmp->prev);
	 	tmp->prev = NULL;
		write(1, "pb\n", 3);
	}
	*a = tmp;
}
