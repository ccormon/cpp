# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 10:08:30 by ccormon           #+#    #+#              #
#    Updated: 2024/10/31 15:47:26 by ccormon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PmergeMe

CXX			= c++
RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRCFILE		= main\
			  PmergeMe\
			  PmergeMeDeq

SRC			= $(addsuffix .cpp,$(SRCFILE))

OBJDIR		= obj
OBJ			= $(addprefix $(OBJDIR)/,$(addsuffix .o,$(SRCFILE)))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re
