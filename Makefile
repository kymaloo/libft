NAME = libft.a

FILES = ft_bzero\
		ft_isalnum\
	 	ft_isalpha\
	 	ft_isascii\
	 	ft_isdigit\
	 	ft_isprint\
		ft_memchr\
		ft_memcmp\
		ft_memcpy\
		ft_memmove\
	 	ft_memset\
	 	ft_strchr\
	 	ft_strlcpy\
	 	ft_strlen\
	 	ft_strncmp\
	 	ft_strrchr\
	 	ft_tolower\
	 	ft_toupper\

SRC = $(foreach f , $(FILES), $(f).c)

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o:
	gcc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re