/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tablen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 15:57:47 by tchezier          #+#    #+#             */
/*   Updated: 2015/04/07 11:08:58 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int tablen(void **table)
{
	int i;

	i = 0;
	while (*table != NULL)
	{
		table++;
		i++;
	}
	return (i);
}
