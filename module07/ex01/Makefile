NAME	= iter
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
OBJ_PATH= objs/

SRC_NAME=	main.cpp

OBJ_NAME= $(SRC_NAME:.cpp=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

ifeq ($(DB),1)
	CFLAGS	+= -g
else ifeq ($(DB),2)
	CFLAGS	+= -g3 -fsanitize=address
else ifeq ($(DB),3)
	CFLAGS	=
endif

DEF= \033[0m
RED= \033[31;1m
GRN= \033[32;1m
YEL= \033[33;1m

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(RED)[$(NAME)] : $(DEF)Compiling..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(RED)[$(NAME)] : $(DEF)Compilation $(GRN)[OK]$(DEF)"

$(OBJ_PATH)%.o: %.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@echo "$(RED)[$(NAME)] :$(DEF) Compiling $@"
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "$(RED)[$(NAME)] : $(DEF)Cleaning $(GRN)[OK]$(DEF)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME)] : $(DEF)Full Cleaning $(GRN)[OK]$(DEF)"

re: fclean all