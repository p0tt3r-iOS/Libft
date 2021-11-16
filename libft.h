/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:42:38 by dha               #+#    #+#             */
/*   Updated: 2021/11/16 17:16:53 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif