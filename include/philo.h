/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:48:14 by yrabby            #+#    #+#             */
/*   Updated: 2022/08/28 22:08:35 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <printf.h>
# include <pthread.h>
# include <unistd.h>

# include "hand.h"
# include "fork.h"
# include "macros.h"
# include "error.h"

typedef enum e_philo_stt
{
	EAT,
	THINK,
	SLEEP,
}	t_philo_stt;

typedef struct s_philo
{
	pthread_t	tid;
	t_philo_stt	stt;
	t_hand		*left;
	t_hand		*right;
}	t_philo;

#endif
