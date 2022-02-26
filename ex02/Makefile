NAME = orthodox
CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@	

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re