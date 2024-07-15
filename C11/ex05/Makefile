SRCS = 	srcs/*
CC = cc  -Wall -Wextra -Werror
LIB = libft.a
RM = rm -f
AR = ar rcs
all:d
	@${CC} do-op.c ${LIB} -o do-op
	@${RM} ${LIB}
d:
	@${CC} -c ${SRCS}
	@${AR} ${LIB} ft*.o
clean:
	@${RM} ft*.o
	@${RM} do-op