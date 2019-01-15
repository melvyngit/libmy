/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/melvyn/tek/tek1/SBMLparser
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Tue Oct 24 13:41:16 2017 COVINDARASSOU Melvyn
** Last update Fri Oct 27 20:39:15 2017 COVINDARASSOU Melvyn
*/

#include <stdlib.h>

int	my_strlen(char *str);

int	word_length(char *tab, int underscore)
{
  int	length;

  length = 0;
  while ((tab[underscore] >= 'A' && tab[underscore] <= 'Z') ||
	 (tab[underscore] >= '0' && tab[underscore] <= '9') ||
	 (tab[underscore] >= 'a' && tab[underscore] <= 'z'))
    {
      underscore = underscore + 1;
      length = length + 1;
    }
  return (length);
}

int	number_of_word(char *tab)
{
  int	counter;
  int	mot;

  counter = 0;
  mot = 0;
  while (my_strlen(tab) > counter)
    {
      if ((tab[counter] >= 'A' && tab[counter] <= 'Z') ||
	  (tab[counter] >= '0' && tab[counter] <= '9') ||
	  (tab[counter] >= 'a' && tab[counter] <= 'z'))
	{
	  mot++;
	  while (((tab[counter] >= '0' && tab[counter] <= '9') ||
		  (tab[counter] >= 'a' && tab[counter] <= 'z') ||
		  (tab[counter] >= 'A' && tab[counter] <= 'Z')) && counter < my_strlen(tab))
	    counter = counter + 1;
	}
      counter = counter + 1;
    }
  return (mot);
}

char	**my_str_to_wordtab(char *str)
{
  char	**array;
  int	one;
  int	two;
  int	three;
  int	length;

  two = 0;
  one = 0;
  array = malloc(number_of_word(str) * sizeof(*array) + 1);
  while (str[one] != '\0')
    {
      if ((length = word_length(str, one)))
	array[two] = malloc(word_length(str, one) * sizeof(**array) + 1);
      three = 0;
      while (length > three && str[one] != '\0' )
	{
	  array[two][three] = str[one];
	  one++;
	  three++;
	}
      if (length)
	{
	  array[two][three] = '\0';
	  one--;
	  two++;
	}
      one++;
    }
  array[two] = 0;
  return (array);
}
