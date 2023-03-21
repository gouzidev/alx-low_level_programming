int printer(char *str)
{
        for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
        {
                putchar(str[i]);
        }
        return (0);
}
