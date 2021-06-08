/*
** my.h for my in /home/melvyn/etna/covind_m/
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Tue Oct 24 13:42:47 2017 COVINDARASSOU Melvyn
** Last update Tue Oct 24 13:46:11 2017 COVINDARASSOU Melvyn
*/

#ifndef		_MY_H_
# define	_MY_H_

typedef	struct	s_value
{
  int		i;
  int		b;
  int		a;
}		t_value;

char	*epurstr(char *str);
char	*change_str(char *str);
int	count_word(char *str);
int	countchar(char *str);
char	**my_str_to_wordtab(char *str);
int	main(int argc, char **argv);

#endif		/* !_MY_H_ */
