#include "../pushswap.h"

void	sb(t_list **b)
{
	int	tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	tmp = (*b)->num;
	(*b)->num = (*b)->next->num;
	(*b)->next->num = tmp;
	ft_reset_index(*b);
	write(1, "sb\n", 3);
}
