#include "main.h"
/**
 * append_text_to_file - Appesdof a file.
 * @filename: A pointerle.
 * @text_content: The s the file.
 *
 * Return: If the te permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int _write_flag;
int i;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (text_content == NULL)
{
if (fd == -1)
{
return (-1);
}
}
i = 0;
while (text_content[i])
i++;
_write_flag = write(fd, text_content, i);
if (_write_flag == -1)
{
return (-1);
}
close(fd);
return (1);
}
