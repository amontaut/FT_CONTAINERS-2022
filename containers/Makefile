# Enter the path [vector, map, stack]
# Enter the name of the file

PATH_SRCS:= ../tests/stack/mystack

SRCS :=	my_empty.cpp

NAME	= testscontainers

CXX		= c++

CXXFLAGS	= -MMD -Wall -Wextra -Werror -std=c++98

OBJS_DIR := ${PATH_SRCS}

OBJS	= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: ${NAME}

$(OBJS_DIR)/%.o:	%.cpp 
	@$(CXX) $(CXXFLAGS) -c $< -o $@ 

${NAME}: $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o ${NAME}

$(OBJS):		| $(OBJS_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:		
			@rm -rf $(addprefix $(PATH_SRCS)/, *.d)
			@rm -rf $(addprefix $(PATH_SRCS)/, *.o)
			@rm -rf ${OBJS}
			@rm -rf $(OBJS:%.o=%.d)

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.phony: all clean fclean re

-include $(OBJS:%.o=%.d)


# Creates 1 exec with the file's name for each file tested and deletes all the .d .o and tests
# BUT
# relinks

# PATH_SRCS:= ../tests/vector/myvector

# SRCS :=	my_empty.cpp

# NAME	= $(addprefix "test_", $(SRCS))

# CXX		= c++

# CXXFLAGS	= -MMD -Wall -Wextra -Werror -std=c++98

# OBJS_DIR := ${PATH_SRCS}

# OBJS	= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

# all: ${NAME}

# $(OBJS_DIR)/%.o:	%.cpp 
# 	@$(CXX) $(CXXFLAGS) -c $< -o $@ 

# ${NAME}: $(OBJS)
# 		$(CXX) $(CXXFLAGS) $(OBJS) -o ${NAME}

# $(OBJS):		| $(OBJS_DIR)

# $(OBJS_DIR):
# 	@mkdir -p $(OBJS_DIR)

# clean:		
# 			@rm -rf $(addprefix $(PATH_SRCS)/, *.d)
# 			@rm -rf $(addprefix $(PATH_SRCS)/, *.o)
# 			@rm -rf ${OBJS}
# 			@rm -rf $(OBJS:%.o=%.d)

# fclean:		clean
# 			@rm -rf ${NAME}
# 			@rm -rf test*

# re:			fclean all

# .phony: all clean fclean re

# -include $(OBJS:%.o=%.d)