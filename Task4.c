#include <stdio.h>
#include <locale.h>
int name();
int date();
int dz();
int main()
{
    setlocale(LC_ALL, ".UTF-8");
    name();
    date();
    
}

int name()
{
    puts("************************************************");
    puts("*                                              *");
    puts("*    тема: Разработка консольного приложения   *");
    puts("*                                              *");
    puts("*    Выполнил Кочергин С.В.                    *");
    puts("*                                              *");
    puts("************************************************");
}
int date()
{
    puts("_    _  _  _");
    puts("_|||| || ||_|");
    puts("|_|||_||_||_|");
}

int dz() {
	system("chcp 65001 > nul");
	printf(" /|\n/_|\n__|__\n|___|\n кораблик");
}
