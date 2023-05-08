#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - read a file.
 * @filename: the file to read.
 * @letters: the number of chars to read
 * Description: read a file
 * section header: the header of this function is holberton.h
 * Return: this return the number of chars.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = malloc(sizeof(char) * letters);
int fh;
int bytes_read;
int _write_flag;

if (filename == NULL)
{
return (0);
}

fh = open(filename, O_RDONLY);

if (fh == -1)
{
return (0);
}


bytes_read = read(fh, buffer, letters);
_write_flag = write(STDOUT_FILENO, buffer, bytes_read);
if (_write_flag == -1 || _write_flag != bytes_read)
{
return (0);
}

close(fh);
free(buffer);
return (_write_flag);
}


