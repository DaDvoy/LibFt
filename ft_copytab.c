
#include "libft.h"

char    **ft_copytab(char **old_tab)
{
    int     i;
    char    **new_tab;

    i = 0;
    while (old_tab[i])
    {
        i++;
    }
    new_tab = malloc(sizeof(char *) * (i + 1));
    i = 0;
    while (old_tab[i])
    {
        new_tab[i] = ft_strdup(old_tab[i]);
        i++;
    }
    new_tab[i] = NULL;
    return (new_tab);
}

