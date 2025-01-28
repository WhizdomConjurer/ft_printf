NAME := libftprintf.a
#libft.a

CC := cc

CFLAGS	:= -Wall -Werror -Wextra
AR = ar rcs
# -g -fsanitize=address -o 

#Pfade
LIBFT_DIR := ../libft
LIBFT := $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c \
			ft_print_general.c \
			ft_print_ptr.c \
			ft_print_unsigned.c \
			ft_print_hexa.c

OBJS= ${SRCS:.c=.o}

# Regeln
all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)
	@echo "✅ $(NAME) erstellt"

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "🧹 Objektdateien entfernt"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "🗑️ Alles entfernt"

re: fclean all

.PHONY: all clean fclean re