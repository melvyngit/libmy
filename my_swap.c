/*
** my_swap.c for my_swap in /home/melvyn/etna/covind_m/my_swap
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 10:22:39 2017 COVINDARASSOU Melvyn
** Last update Wed Oct 18 17:46:09 2017 COVINDARASSOU Melvyn
*/

void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
