NAME = libftprintf.a

LIBFT = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -rf

SRC_DIR = src/

OBJ_DIR = obj/

SRC_FILES = display my_printf utils display_point

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))

HEAD = ./include/

all : $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

$(NAME)	: $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)
	@echo "my_printf compiled!"

clean :
	$(RM) $(OBJ_DIR)
	$(RM) $(LIBFT)/$(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a

re : fclean all