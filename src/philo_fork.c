/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_fork.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:01:45 by yoav              #+#    #+#             */
/*   Updated: 2022/11/08 14:47:32 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_error_code	philo_pick_fork_left(t_philo *p)
{
	t_error_code	err;

	if (!philo_is_simulation_on(p))
		return (END_SIMULATION);
	err = hand_pick_fork(p->left_hand);
	if (SUCCESS == err)
		print_action(p, "has taken a fork", timer_get_now());
	return (err);
}

t_error_code	philo_pick_fork_right(t_philo *p)
{
	t_error_code	err;

	if (!philo_is_simulation_on(p))
		return (END_SIMULATION);
	err = hand_pick_fork(p->right_hand);
	if (SUCCESS == err)
		print_action(p, "has taken a fork", timer_get_now());
	return (err);
}

void	philo_drop_fork_right(t_philo *p)
{
	hand_drop_fork(p->right_hand);
}

void	philo_drop_fork_left(t_philo *p)
{
	hand_drop_fork(p->left_hand);
}

void	philo_drop_forks(t_philo *p)
{
	philo_drop_fork_left(p);
	philo_drop_fork_right(p);
}
