#include <unistd.h>
int main(int argc, char** argv)
{
    int i;
    int j;
    char *temp;

    i = 1;
    while(i != argc)
    {
        temp = argv[i];
        j = 0;
        while (temp[j] != '\0')
        {
            write(1, &temp[j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}