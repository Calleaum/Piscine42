#include <unistd.h>
int ft_strlen(char *s)
{
    int i = 0;

    while (s[i])
    {
        i++;
    }
    return i;
}
int main(int argc, char **argv)
{
    int rev;
    if (argc == 2)
    {
        rev = ft_strlen(argv[1]);
        while(rev--)
            write(1, &argv[1][rev], 1);
    }
    write(1, "\n", 1);
}