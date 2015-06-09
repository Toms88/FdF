/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 17:54:48 by tchezier          #+#    #+#             */
/*   Updated: 2015/04/07 12:01:15 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int expose_hook(t_env *e)
{
  int status;
  int x;
  int y;

  ft_putendl("we are in expose hook");
  x = ((e->res)[0] / 10);
  y = ((e->res)[1] / 10);
  status = 0;
  trace_map(e, x, y);
  status = mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
  e->mlx = e->mlx;
  return (0);
}
