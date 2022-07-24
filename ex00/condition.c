/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:33:07 by wmessmer          #+#    #+#             */
/*   Updated: 2022/07/24 15:47:25 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/
int		test_nb(char *nb)
{
	int		i;

	i = -1;
	while (nb[++i])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	return (1);
}
int		verfi_arg(int argc, char **argv)
{
	if (argc == 2)
		return (1);
	else if (argc == 3)
		return (1);
	return (0);
}
int		ft_file_read(char *filepath, t_dict **begin)
{
	int			file;

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		if (/*taillebuffer*/(file, begin) == 0)
			return (-1);
		return (1);
	}
	else
		return (0);
}
int		main(int argc, char **argv)
{
	char	*nb;
	char	*dictpath;

	if (verif_arg(argc, argv) == 0 || test_nb(nb) == 0)
		ft_putstr("Error\n");
	else
	{
		dict = 0;
		if ((ft_file_read(dictpath, &dict) == 1 ) && (verif() == 1))
			//go
		else
			ft_putstr("Dict Error\n");
	}
	return (0);
}
int	verif(void)
{
	int	wc;
	char	buf[1];
	int	count;
	
	file = open(path, O_RDWR);
	wc = read(file, buf, 1);
	while (wc != "/n")
	{
		while (*buf != "/n")
		{
			if (*buf >= 0 && *buf <=9)
				count = 1;
				break;
			buff++;
		}
		while (*buf != "/n")
		{
			if (*buf == ':')
				count = 2;
				break;
			buff++;
		}
		while (*buf != "/n")
		{
			if ((*buf >= 0 && *buf <=9) || (*buf <= 'a' && *buf >= 'z') || (*buf <= 'A' && *buf <= 'Z'))
				count = 3;
				break;
			buff++;
		}
	}
	close(file);
	if (count == 3)
			return (1);
	return (0);
}
