#include "main.h"

/**
 *  create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
int fh;
int _write_flag;

if (filename == NULL)
{
return (-1);
}

fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

if (fh == -1)
{
return (-1);
}

if (text_content == NULL)
{
_write_flag = creat(filename, 00600);
}

if (_write_flag == -1)
{
close(fh);
return (-1);
}
close(fh);
return (1);
}
