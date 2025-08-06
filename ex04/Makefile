# -------------------------------------------------------------------
# VARIABLES
# -------------------------------------------------------------------

# Source file directories
SRCS_DIR			= ./

INCLUDES_DIR		= ./

# Other directories
OBJS_DIR			= ./objs/

# Source files
CFILES_ROOT			= main.cpp \
					  replace_buffer.cpp

CFILES_TEST			= tests.cpp

OBJ_FILES 			:= $(CFILES_ROOT:.cpp=.o)

TEST_OBJ_FILES 		:= replace_buffer.o tests.o

OBJS				:= $(addprefix $(OBJS_DIR), $(OBJ_FILES))

TEST_OBJS			:= $(addprefix $(OBJS_DIR), $(TEST_OBJ_FILES))

# Compilation variables
NAME				= program
TEST_NAME			= tests
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

test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_NAME) $(TEST_OBJS)

clean:
	$(RM) objs

fclean: clean
	$(RM) $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re debug test

# -------------------------------------------------------------------
# OBJECT RULES
# -------------------------------------------------------------------
# // These have to be implemented for each directory in the project

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@