#--- LIBRARY NAME ---#
NAME = smm

#--- COMMAND VARIABLES ---#
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
RM = rm -f
MK = mkdir -p

#--- COLORS ---#
GREEN	=	\033[1;32m
CYAN	=	\033[1;36m
RED		=	\033[1;31m
RESET 	= 	\033[0m

#--- STRING ---#
CLEANING := "$(GREEN)[+] Cleaning Completed$(RESET)"
SUCCESS := "$(GREEN)[+] $(NAME) Successfully Compiled!$(RESET)"

#--- OBJECT ---#
SRC = main.cpp
INCDIR = inc
OBJDIR = bin
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

#--- RULES ---#
$(OBJDIR)/%.o:	%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCDIR) -I. -c $< -o $@
	@echo "$(CYAN)[-] Compiling: $@$(RESET)"

all: $(NAME)

$(OBJDIR):
	@$(MK) $(OBJDIR)
	
${NAME}:	$(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(SUCCESS)

clean:
	@$(RM) $(OBJ)
	@$(RM)r $(OBJDIR)
	@echo $(CLEANING)

fclean:	clean	
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re