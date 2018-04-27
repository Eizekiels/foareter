/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reflexion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 19:15:22 by mguyout           #+#    #+#             */
/*   Updated: 2018/04/25 21:01:45 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rt.h"

t_coo	ft_reflexion(t_rt *rt)
{
	t_coo newray;
	double dotp;

   	rt->inter->angle->dir = ft_normalize(rt->inter->angle->dir);
	rt->ray->dir = ft_normalize(rt->ray->dir);
	dotp = scal(rt->ray->dir, rt->inter->angle->dir);
	newray.x = rt->ray->dir.x - 2 * dotp * rt->inter->angle->dir.x;
	newray.y = rt->ray->dir.y - 2 * dotp * rt->inter->angle->dir.y;
	newray.z = rt->ray->dir.z - 2 * dotp * rt->inter->angle->dir.z;
	newray = ft_normalize(newray);
	return (newray);
}
