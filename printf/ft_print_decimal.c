#include "ft_printf.h"

void ft_print_decimal(int n)
{
    if (n == -2147483648)
    {
        ft_print_str("-2147483648");
        return ;
    }
    if (n < 0)
    {
        ft_print_char('-');
        n = -n;
    }
    if (n > 9)
    {
        ft_print_decimal(n / 10);
        ft_print_char((n % 10) + '0');
    }
    else
    {
        ft_print_char(n + '0');
    }
}
