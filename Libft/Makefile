NAME = libft.a
OBJ = ft_isalnum.o\
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
	ft_memcmp.o\
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
	ft_strdup.o\
	ft_substr.o\
	ft_strjoin.o\
	ft_strtrim.o\
	ft_split.o\
	ft_itoa.o\
	ft_strmapi.o\
	ft_striteri.o\
	ft_putchar_fd.o\
	ft_putstr_fd.o\
	ft_putendl_fd.o\
	ft_putnbr_fd.o
OBJB = ft_lstnew.o\
	ft_lstadd_front.o\
	ft_lstsize.o\
	ft_lstlast.o\
	ft_lstadd_back.o\
	ft_lstdelone.o\
	ft_lstclear.o\
	ft_lstiter.o\
	ft_lstmap.o
FLAGS = -Wall -Werror -Wextra
CC	= 	gcc
RM	= 	rm -f
LIBC	= 	ar -rcs
FLAGS	= 	-Wall -Wextra -Werror

all : $(NAME)

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)
bonus: $(OBJB)
	$(LIBC) $(NAME) $(OBJB)
$(OBJ) : libft.h
$(OBJB) : libft.h
clean :
	$(RM) $(OBJ)
	$(RM) $(OBJB)
fclean : clean
	$(RM) $(NAME)
re: fclean all
.PHONY : clean fclean re