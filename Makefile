# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgrimmei <lgrimmei@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 15:45:41 by lgrimmei          #+#    #+#              #
#    Updated: 2024/02/22 23:35:27 by lgrimmei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS FOR PRINTING
GREEN = \033[0;32m
RESET = \033[0m

# DIRECTORIES
OBJ_DIR = obj
SRC_DIR = src

# EXECUTABLE NAME
NAME = ft_printf

# SOURCE FILES
SRCS =	main.c\
		ft_printf.c\
		ft_put_ptr.c\
		ft_put_char.c\
		ft_put_nbr_hex.c\
		ft_put_nbr.c\
		ft_put_str.c\
		ft_put_unsigned.c\

# OBJECT FILES
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

# COMPILER
CC = cc

# COMPILATION FLAGS
CFLAGS = -Wall -Wextra -Werror

# COMMANDS
RM = rm -f
MKDIR = mkdir -p

# DIRECTORIES
INCL_DIR = incl

# RULES
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(MKDIR) $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INCL_DIR) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -I $(INCL_DIR) $^ -o $(NAME)
	@echo "$(GREEN)./$(NAME) is ready!$(RESET)"

fclean : clean
	@$(RM) $(NAME)

clean :
	@$(RM) -r $(OBJ_DIR)

re : fclean all

.PHONY : all clean fclean re