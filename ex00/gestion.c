#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "gestion.h"
#include "search.h"
int count_size_line(char *path, int nbline)
{
	int		count;
	char 	buf[1];
	int 	line_count;
	int 	file;

	line_count = 0;
	count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < nb_ligne(path) && *buf != '\0')
	{
		count++;
		if (*buf == '\n'){
			line_count++;
			if (line_count < nbline)
				count = 0;
		}
		read(file, buf, 1);
	}
	close(file);
	return (count);
}


dict	*attribution(char *path)
{
	dict * dico;
	int	max_lign;
	int	nb_lign;
		
	max_lign = nb_ligne(path);
	if (max_lign == -1)
		return (NULL);
	dico = init_dict(max_lign);
	if (dico == NULL)
		return (NULL);
	nb_lign = 0;
	while (nb_lign < max_lign)
	{
		dico->entries[nb_lign].key = f_word(nb_lign, path);
		dico->entries[nb_lign].value = l_word(nb_lign, path);
		nb_lign++;
	}
	return (dico);
}