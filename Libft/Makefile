NAME = libft.a
objects = ft_isalnum.o\
	ft_isalpha.o\
	ft_isascii.o\
	ft_isdigit.o\
	ft_isprint.o\
	ft_strlcat.o\
	ft_strlcpy.o\
	ft_strlen.o\
	ft_strncmp.o\
	ft_memset.o\
	ft_bzero.o\
	ft_memcpy.o\
	ft_memmove.o\
	ft_tolower.o\
	ft_toupper.o\
	ft_strchr.o\
	ft_strrchr.o\
	ft_memchr.o\
	ft_strnstr.o\
	ft_atoi.o\
	ft_calloc.o\
	ft_strdup.o
FLAGS = -Wall -Werror -Wextra
CC	= 	gcc
RM	= 	rm -f
LIBC	= 	ar -rcs
FLAGS	= 	-Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(objects)
	$(LIBC) $(NAME) $(objects)
all : $(NAME)
$(objects) : libft.h
clean :
	rm $(objects)
fclean : clean
	rm $(NAME)
re: fclean all
.PHONY : clean fclean re