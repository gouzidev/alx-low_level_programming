int printer(char *str)
{
	int i = 0;

        for (i = 0; i < sizeof(*str) / sizeof(*str[0]); i++)
        {
                putchar(str[i]);
        }
        return (0);
}
