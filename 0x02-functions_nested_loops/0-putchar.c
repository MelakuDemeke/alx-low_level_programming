#include "main.h"
/**
 * main - starting of the program
 * 
 * Description: prints _putchar 
 * 
 * Return: 0-> endicated end
 * 
*/

int main(void)
{
    char name[] = "_putchar";
    int i

    for (i = 0; i < 8; i++){
        _putchar(name[i]);
    }
    _putchar('\n');

    return (0);
}