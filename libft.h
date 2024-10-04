#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void		*content;
	struct s_list *next;
} t_list;

int	ft_atoi(const char *ch);

#endif
