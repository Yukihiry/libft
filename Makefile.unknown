CC = gcc
FLAGS = -Wall -Werror -Wextra -I.
AR = ar crs
RM = rm -rf
FILES = ft_memset ft_bzero
OBJ = $(FILES:.c=.o)  # Fixed to properly generate .o files from .c
NAME = libft.a

# Color definitions for terminal output
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)
	@echo "$(GREEN)------ Build complete ------$(RESET)"

# Define bonus files if needed, for now it's empty
BFILES =  # Add any bonus files here
BOBJ = $(BFILES:.c=.o)

bonus: all $(BOBJ)
	@echo "$(GREEN)Compiling bonus files...$(RESET)"
	@$(AR) $(NAME) $(BOBJ)

$(NAME): $(OBJ)
	@echo "$(GREEN)Creating library...$(RESET)"
	@$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	@echo "$(GREEN)Compiling $<...$(RESET)"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaning up...$(RESET)"
	@$(RM) $(OBJ) $(BOBJ)

fclean: clean
	@echo "$(YELLOW)Removing library...$(RESET)"
	@$(RM) $(NAME)

re: fclean all
