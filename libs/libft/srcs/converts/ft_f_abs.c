/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 09:03:19 by ldutriez          #+#    #+#             */
/*   Updated: 2019/12/03 17:19:29 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_f_abs(float p_value)
{
	if (p_value == 0)
		return (0);
	if (p_value < 0)
		p_value *= -1;
	return (p_value);
}
