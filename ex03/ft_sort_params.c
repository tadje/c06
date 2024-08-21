#include <unistd.h>
void ft_putchar(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            break;
        i++;
    }
    return ((int)(s1[i] - s2[i]));
}
int main(int argc, char** argv)
{
    char *temp;
    int i;
    int j;
    int min;

    i = 1;
    min = -127;
    while (i != argc)
    {
        temp = argv[1];
        j = 1;
        while(j != argc)
        {
            if (ft_strcmp(temp, argv[j])  > 0 && ft_strcmp(temp, argv[j])  <  min)
            {
                 min = ft_strcmp(temp, argv[j]);
                 temp = argv[j];
            }
            j++;
        }
        ft_putchar(temp);
        i++;
    }
}