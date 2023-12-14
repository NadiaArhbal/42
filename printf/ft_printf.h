#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>

int ft_printf(const char *input,...);
void ft_print_char(int c);
void    ft_putstr(char *s);
void ft_print_str(char *str);
void ft_print_percent(void);

#endif
