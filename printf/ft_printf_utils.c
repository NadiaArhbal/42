#include "ft_printf.h"

//dans le cas du c
void ft_print_char(int c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *s)
{
    int i;

    if (!s) return ;
    i = 0;
    while (s[i])
    {
        ft_print_char(s[i]);
        i++;
    }
}

//dans le cas du s
void ft_print_str(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        ft_putstr("(null)");

    while(str[i])
    {
        ft_print_char(str[i]);
        i++;
    }
}

// dans le cas du %
void ft_print_percent(void)
{
    ft_print_char('%');
}


