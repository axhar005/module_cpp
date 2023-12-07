#--- LIBRARY NAME ---#
NAME = phonebook

#--- COMMAND VARIABLES ---#
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
RM = rm -f
MK = mkdir -p

#--- COLORS ---#
GREEN	=	\033[1;32m
RED		=	\033[1;31m
RESET 	= 	\033[0m

#--- OBJECT ---#
SRC = main.cpp Contact.cpp PhoneBook.cpp
INCDIR = inc
OBJDIR = bin
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

#--- RULES ---#
$(OBJDIR)/%.o:	%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCDIR) -I. -c $< -o $@

all: $(NAME)

$(OBJDIR):
	@$(MK) $(OBJDIR)
	
${NAME}:	$(OBJDIR) $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(NAME)$(GREEN) successfully compiled 📁.$(RESET)"

clean:
	@$(RM) $(OBJ)
	@$(RM)r $(OBJDIR)

fclean:	clean	
	@$(RM) $(NAME)
	@echo "$(NAME)$(GREEN) object files and executable successfully removed 🗑.$(RESET)"

re:	fclean all

.PHONY:	all clean fclean re