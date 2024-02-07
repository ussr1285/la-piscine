CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET): $(OBJS)
	ar rc $(TARGET) $(OBJS)

%.o : %.c
	$(CC) -c $(CFLAGS) $^ -o $@ -I includes

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(TARGET)

re:
	make fclean
	make all