##
## Makefile<etna> for Makefile in /home/melvyn/tek/tek1/rendu/CPE/CPE_2015_BSQ
## 
## Made by COVINDARASSOU Melvyn
## Login   <covind_m@etna-alternance.net>
## 
## Started on  Fri Oct 20 20:35:07 2017 COVINDARASSOU Melvyn
## Last update Tue Oct 24 13:48:28 2017 COVINDARASSOU Melvyn
##

NAME_LIB	= libmy.a

SRCS_LIB	= my_putchar.c		\
		  my_isneg.c		\
		  my_swap.c		\
		  my_putstr.c		\
		  my_put_nbr.c		\
		  my_strlen.c		\
		  my_getnbr.c		\
		  my_strcpy.c		\
		  my_strncpy.c		\
		  my_strcmp.c		\
		  my_strncmp.c		\
		  my_strcat.c		\
		  my_strncat.c		\
		  my_strdup.c		\
		  my_strstr.c		\
		  my_str_to_wordtab.c

OBJS_LIB	= $(SRCS_LIB:.c=.o)

RM		= rm -rf

all:		$(NAME_LIB)

$(NAME_LIB):	$(OBJS_LIB)
		ar rc $(NAME_LIB) $(OBJS_LIB)
		ranlib $(NAME_LIB)

clean:
		$(RM) $(OBJS_LIB)

fclean:		clean
		$(RM) $(NAME_LIB)

re:		fclean all clean

.PHONY:		all clean fclean re
