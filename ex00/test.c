#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int count_size_line(char *path, int nbline)
{
	int		count;
	char 	buf[1];
	int 	line_count;
	int 	file;
	int 	res;

	line_count = 0;
	count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < nbline && *buf != '\0')
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

int nb_ligne(char *path)
{
	int		file;
	int		count;
	char	buf[1];
	int 	wc;

	file = open(path, O_RDWR);
	if (file == -1)
		return -1;
	count = 0;
	wc = read(file, buf, 1);
	while (wc > 0)
	{
		//write(1, buf, 1);
		if (*buf == '\n')
			count++;
		wc = read(file, buf, 1);
	}
	close(file);
	return count;
} 

//  dict * dico;
//  dico = initialise_dico(ligne_max);
//  nb_ligne = 0 
//  while (nb_ligne < ligne_max)
//  ..... ligne
// ...... dico->entries[nb_ligne].key = atoi(gauche)
// ...... dico->entries[nb_ligne].values = partie_droite
//        nb_ligne++;

int main(int argc, char const *argv[])
{
	char buf[BUFSIZ];
	int wc;
	int file;
	int count;

	printf("1 : %d\n", count_size_line("numbers.dict", 1));
	printf("2 : %d\n", count_size_line("numbers.dict", 2));
	printf("3 : %d\n", count_size_line("numbers.dict", 3));
	printf("nb of ligne : %d\n", nb_ligne("numbers.dict"));
	return 0;
}