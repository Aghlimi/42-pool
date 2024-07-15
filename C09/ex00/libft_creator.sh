#!/bin/bash
find . -type f -name "ft_*.c" -exec gcc -Wall -Wextra -Werror -c {} \;
ar rcs libft.a ft_*.o
rm ft_*.o