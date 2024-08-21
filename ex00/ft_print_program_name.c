#include <unistd.h>
int main(int argc, char** argv)
{
    char    *temp;
    int i;
    
    temp = argv[0];
    i = 0;
    while (temp[i] != '\0')
    {
        write(1, &temp[i], 1);
        i++;
    }

    write(1,"\n", 1);
    return (0);
}