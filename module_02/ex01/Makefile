
SRCS = ClassCar.cpp ClassSportsCar.cpp ClassRetroCar.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = car

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

.cpp.o:
			clang++ -c $< -o $@

$(NAME):	$(OBJS)
			clang++ $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)


fclean:		clean
			rm -f $(NAME)

re: fclean all