
char		fword(int lign, char *path)
{
	char		val[50];
	char 	buf[1];
	int 	line_count;
	int 	file;
	int	i;

	i = 0;
	line_count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < lign && *buf != '\0')
	{
		count++;
		if (*buf == '\n')
		{
			line_count++;
			if (line_count < nbline)
				count = 0;
		}
		read(file, buf, 1);
		
	}
	while ((*buf >= 0 && *buf <= 9) && (*buf != '\n'))
	{
		val[i] = *buf;
		read(file, buf, 1);
		i++;
		
	}
	close(file);
	return (val);
	}

char		lword(int lign, char *path)
{
	char		val[50];
	char 	buf[1];
	int 	line_count;
	int 	file;
	int	i;

	i = 0;
	line_count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < lign && *buf != '\0')
	{
		count++;
		if (*buf == '\n')
		{
			line_count++;
			if (line_count < nbline)
				count = 0;
		}
		read(file, buf, 1);
		
	}
	while (((*buf >= 'Z' && *buf <= 'A') || (*buf >= 'Z' && *buf <= 'A')) && (*buf != '\n'))
	{
		val[i] = *buf;
		read(file, buf, 1);
		i++;
	}
	close(file);
	return (val);
}
