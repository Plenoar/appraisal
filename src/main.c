#include <stdio.h>

unsigned long djb2(char *input)
{
    unsigned long hash = 5381;
    char c;

    while (c = *input++)
    {
        hash = (hash << 5) + hash + c;
    }
    
    return hash;
} 

int main(int argc , char *argv[])
{
    if (argc != 2)
    {
        printf("need one argument");
        return 1;
    }

    unsigned long result = djb2(argv[1]);
    printf("hashed:%lu\n", result);

    return 0;

}