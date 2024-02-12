/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_static_variable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:22:00 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/12 09:52:01 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// static int	count;

int	increment()
{
	int	var = 3;
	static int	count = var;
	// int	count = 0; /*Local variable*/
	count = count + 1;
	return count;
}

#include <stdio.h>

//extern int	count;
int	main()
{
	int	value;

	value = increment();
	value = increment();
	value = increment();
	// count = count + 3;
	// value = count;
	
	printf("%d\n", value);
	return 0;
}