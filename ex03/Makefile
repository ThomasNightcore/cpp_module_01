# -------------------------------------------------------------------
# VARIABLES
# -------------------------------------------------------------------

# Source file directories
SRCS_DIR			= ./

INCLUDES_DIR		= ./

# Other directories
OBJS_DIR			= ./objs/

# Source files
CFILES_ROOT			= Weapon.cpp \
					  HumanA.cpp \
					  HumanB.cpp \
					  main.cpp

OBJ_FILES 			:= $(CFILES_ROOT:.cpp=.o) \


OBJS				:= $(addprefix $(OBJS_DIR), $(OBJ_FILES))

# Compilation variables
NAME				= program
CXX 				= c++
CXXFLAGS 			= -Wall -Werror -Wextra -std=c++98
RM 					= rm -rf
INCLUDES			:= $(INCLUDES_DIR)

# -------------------------------------------------------------------
# RULES
# -------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

debug:
	$(MAKE) CXXFLAGS="-g $(CXXFLAGS)"

clean:
	$(RM) objs

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re debug

# -------------------------------------------------------------------
# OBJECT RULES
# -------------------------------------------------------------------
# // These have to be implemented for each directory in the project

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
