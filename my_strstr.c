/*
** my_strstr.c for my_strstr in /home/melvyn/etna/libmy_01
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Sat Oct 21 16:42:34 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 16:48:45 2017 COVINDARASSOU Melvyn
*/

char	*my_strstr(char *str, char *to_find)
{
  int	j;
  int	i;

  j = 0;
  i = 0;
  if (!(to_find[j]))
    return (str);
  while (str[i])
    {
      j = 0;
      while (to_find[j] == str[i + j])
	{
	  if (to_find[j + 1] == '\0')
	    return (str + i);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}
