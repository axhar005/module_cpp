#--- LIBRARY NAME ---#
NAME = megaphone

#--- COMMAND VARIABLES ---#
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
MK = mkdir -p

#--- COLORS ---#
GREEN	=	\033[1;32m
RED		=	\033[1;31m
CYAN	=	\033[1;36m
RESET 	= 	\033[0m

#--- STRING ---#
CLEANING := "$(GREEN)[+] Cleaning Completed$(RESET)"
SUCCESS := "$(GREEN)[+] $(NAME) Successfully Compiled!$(RESET)"

#--- OBJECT ---#
SRC = megaphone.cpp
OBJDIR = bin
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

#--- RULES ---#
$(OBJDIR)/%.o:	%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I. -c $< -o $@
	@echo "$(CYAN)[-] Compiling: $@$(RESET)"

all: $(NAME)

$(OBJDIR):
	@$(MK) $(OBJDIR)
	
${NAME}:	$(OBJDIR) $(OBJ)
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