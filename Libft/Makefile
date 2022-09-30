NAME = libft.a
SRC = ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_memchr.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c
SRCB = ft_lstnew_bonus.o\
	ft_lstadd_front_bonus.o\
	ft_lstsize_bonus.o\
	ft_lstlast_bonus.o\
	ft_lstadd_back_bonus.o\
	ft_lstdelone_bonus.o\
	ft_lstclear_bonus.o\
	ft_lstiter_bonus.o\
	ft_lstmap_bonus.o
OBJ := $(SRC:.c=.o)
OBJB := $(SRCB:_bonus.c=_bonus.o)
DEPS = libft.h
DEPSB = libft_bonus.h
DEPFILES = *.d
CC	= 	gcc
CFLAGS = -Wall -Werror -Wextra -MMD
RM	= 	rm -f
LIBC	= 	ar -rcs

all : $(NAME) bonus

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)
bonus: $(NAME) $(OBJB)
	$(LIBC) $(NAME) $(OBJB)
-includes : $(DEPS) $(DEPSB)
$(OBJ) : $(DEPS)
$(OBJB) : $(DEPSB)
clean :
	$(RM) $(OBJ)
	$(RM) $(OBJB)
	$(RM) $(DEPFILES)
fclean : clean
	$(RM) $(NAME)
re: fclean all
.PHONY : clean fclean re