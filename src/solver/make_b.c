#include "../utils/header/pushswap.h"

int	makeb_rr(t_list **a, t_list **b, int nb)
{
	while ((*a)->num != nb && get_positionb(b, nb) > 0)
		rr(a, b);
	while ((*a)->num != nb)
		ra(a, -1);
	while (get_positionb(b, nb) > 0)
		rb(b, -1);
	pb(b, a);
	return (-1);
}

int	makeb_rrr(t_list **a, t_list **b, int nb)
{
	while ((*a)->num != nb && get_positionb(b, nb) > 0)
		rrr(a, b);
	while ((*a)->num != nb)
		rra(a, -1);
	while (get_positionb(b, nb) > 0)
		rrb(b, -1);
	pb(b, a);
	return (-1);
}

int	makeb_rrarb(t_list **a, t_list **b, int nb)
{
	while ((*a)->num != nb)
		rra(a, -1);
	while (get_positionb(b, nb) > 0)
		rb(b, -1);
	pb(b, a);
	return (-1);
}

int	makeb_rrbra(t_list **a, t_list **b, int nb)
{
	while ((*a)->num != nb)
		ra(a, -1);
	while (get_positionb(b, nb) > 0)
		rrb(b, -1);
	pb(b, a);
	return (-1);
}
