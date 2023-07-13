
SRCS = convert.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = convert

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

.cpp.o:
			clang++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			clang++ $(OBJS) $(CFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)


fclean:		clean
			rm -f $(NAME)

re: fclean all