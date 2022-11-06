/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_print_action.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:42:52 by yoav              #+#    #+#             */
/*   Updated: 2022/11/06 13:04:42 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_action(t_philo *p, const char *msg)
{
	long	now;

	if (!p->simulation_is_on)
		return ;
	pthread_mutex_lock(&(p->print_mutex));
	now = timer_get_now();
	printf("%ld %d %s\n", (now - p->start_time), p->id, msg);
	pthread_mutex_unlock(&(p->print_mutex));
}

void	print_dead(t_philo *p)
{
	pthread_mutex_lock(&(p->print_mutex));
	printf("%ld %d %s\n", (p->time_of_death - p->start_time), p->id, \
		"died");
	pthread_mutex_unlock(&(p->print_mutex));
}
