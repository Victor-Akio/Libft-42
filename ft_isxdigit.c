/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:33:24 by vminomiy          #+#    #+#             */
/*   Updated: 2020/02/12 22:21:13 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') ||
		(c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}