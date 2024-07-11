# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 16:40:54 by ccormon           #+#    #+#              #
#    Updated: 2024/07/11 16:41:16 by ccormon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harl

CXX			= c++
RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCFILE		= main

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
