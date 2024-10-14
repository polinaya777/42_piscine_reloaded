/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.ber>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:59:40 by pyarova           #+#    #+#             */
/*   Updated: 2024/10/08 10:05:20 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

//# define ABS(Value) ((Value > 0) * Value - (Value < 0) * Value)
# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
