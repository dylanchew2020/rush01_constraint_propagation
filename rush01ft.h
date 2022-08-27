/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01ft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:56:28 by lchew             #+#    #+#             */
/*   Updated: 2022/05/28 14:09:19 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01FT_H
# define RUSH01FT_H

# include <stdlb.h>
# include <unistd.h>

typedef struct s_database{
	int	**board;
	int	**input;
	int	size;
}		t_database;

#endif