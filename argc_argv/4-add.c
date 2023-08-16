#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int index;
        int sum;
        char *validPointer;
        long int validityValue;

        sum = 0;

        if (argc == 1)
        {
                printf("0\n");
                return (0);
        }

        for (index = 1; index < argc; index++)
        {       
                strtol(argv[index], &validPointer, 10);

                if (validPointer == argv[index] || *validPointer != '\0')
                {
                        printf("Error\n");
                        return (1);
                } else
                {
                        sum += atoi(argv[index]);
                }
        }

        printf("%d\n", sum);
        return (0);	
}
