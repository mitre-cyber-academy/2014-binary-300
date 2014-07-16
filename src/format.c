#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>

#define ECHAR(x) ((x) + 25)
#define DCHAR(x) ((x) - 25)

int bullseye;
int answer = 0;

static char* dec(char *in, int bytes)
{
	char *p = in;
	int i = 0;

	for(i = 0; i < bytes; i++)
	{
		*p = DCHAR(*p);
		p++;
	}

	return in;
}
void doorwithkey(void)
{
	char string[] = {ECHAR('D'), ECHAR('i'), ECHAR('d'), ECHAR(' '), ECHAR('y'), ECHAR('o'), ECHAR('u'), ECHAR(' '), ECHAR('r'), ECHAR('e'), ECHAR('a'), ECHAR('l'), ECHAR('l'), ECHAR('y'),
						ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('i'), ECHAR('n'), ECHAR('k'), ECHAR(' '), ECHAR('i'), ECHAR('t'), ECHAR(' '), ECHAR('w'), ECHAR('o'), ECHAR('u'), ECHAR('l'), ECHAR('d'),
						ECHAR(' '), ECHAR('b'), ECHAR('e'), ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('a'), ECHAR('t'), ECHAR(' '), ECHAR('e'), ECHAR('a'), ECHAR('s'), ECHAR('y'), ECHAR('?'), '\0'};
	puts(dec(string, sizeof(string)-1));
	puts("( ͡° ͜ʖ ͡°)");
	_exit(1);
}

void door0(void)
{	
	char string[] = {ECHAR('T'), ECHAR('r'), ECHAR('y'), ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('e'), ECHAR(' '), ECHAR('d'), ECHAR('o'), ECHAR('o'), ECHAR('r'), ECHAR(' '),
						ECHAR('t'), ECHAR('h'), ECHAR('a'), ECHAR('t'), ECHAR(' '), ECHAR('V'), ECHAR('e'), ECHAR('g'), ECHAR('e'), ECHAR('t'), ECHAR('a'), ECHAR(' '),
						ECHAR('w'), ECHAR('o'), ECHAR('u'), ECHAR('l'), ECHAR('d'), ECHAR(' '), ECHAR('y'), ECHAR('e'), ECHAR('l'), ECHAR('l'), ECHAR(' '),
						ECHAR('a'), ECHAR('b'), ECHAR('o'), ECHAR('u'), ECHAR('t'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door1(void)
{
	char string[] = {ECHAR('S'), ECHAR('i'), ECHAR('l'), ECHAR('l'), ECHAR('y'), ECHAR(' '), ECHAR('h'), ECHAR('u'), ECHAR('m'), ECHAR('a'), ECHAR('n'), ECHAR('.'), ECHAR(' '), ECHAR('T'), ECHAR('r'), ECHAR('y'), ECHAR(' '), ECHAR('s'), ECHAR('t'), ECHAR('a'), ECHAR('r'), ECHAR('t'), ECHAR('i'), ECHAR('n'), ECHAR('g'),
						ECHAR(' '), ECHAR('f'), ECHAR('r'), ECHAR('o'), ECHAR('m'), ECHAR(' '), ECHAR('w'), ECHAR('h'), ECHAR('e'), ECHAR('r'), ECHAR('e'), ECHAR(' '), ECHAR('c'), ECHAR('o'), ECHAR('m'), ECHAR('p'), ECHAR('u'), ECHAR('t'), ECHAR('e'), ECHAR('r'), ECHAR('s'), ECHAR(' '),
						ECHAR('s'), ECHAR('t'), ECHAR('a'), ECHAR('r'), ECHAR('t'), ECHAR(' '), ECHAR('c'), ECHAR('o'), ECHAR('u'), ECHAR('n'), ECHAR('t'), ECHAR('i'), ECHAR('n'), ECHAR('g'), ECHAR('!'), '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door9001(void)
{
	char string[] = {ECHAR('R'), ECHAR('e'), ECHAR('m'), ECHAR('e'), ECHAR('m'), ECHAR('b'), ECHAR('e'), ECHAR('r'), ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('a'), ECHAR('t'),
						ECHAR(' '), ECHAR('w'), ECHAR('o'), ECHAR('r'), ECHAR('d'), ECHAR(' '), ECHAR('c'), ECHAR('u'), ECHAR('p'), ECHAR(' '), ECHAR('y'), ECHAR('e'), ECHAR('a'), ECHAR('r'),
						ECHAR(' '), ECHAR('w'), ECHAR('h'), ECHAR('e'), ECHAR('n'), ECHAR(' '), ECHAR('Z'), ECHAR('i'), ECHAR('d'), ECHAR('a'), ECHAR('n'), ECHAR('e'),
						ECHAR(' '), ECHAR('h'), ECHAR('e'), ECHAR('a'), ECHAR('d'), ECHAR('b'), ECHAR('u'), ECHAR('t'), ECHAR('t'), ECHAR('e'), ECHAR('d'),
						ECHAR(' '), ECHAR('M'), ECHAR('a'), ECHAR('t'), ECHAR('e'), ECHAR('r'), ECHAR('a'), ECHAR('z'), ECHAR('z'), ECHAR('i'), ECHAR('?'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door2006(void)
{
	char string[] = {ECHAR('D'),ECHAR('o'),ECHAR('c'),ECHAR('t'),ECHAR('o'),ECHAR('r'),ECHAR(' '),ECHAR('B'),ECHAR('r'),ECHAR('o'),ECHAR('w'),ECHAR('n'),ECHAR(' '),ECHAR('w'),ECHAR('o'),
					ECHAR('u'),ECHAR('l'),ECHAR('d'),ECHAR(' '),ECHAR('h'),ECHAR('a'),ECHAR('v'),ECHAR('e'),ECHAR(' '),ECHAR('f'),ECHAR('a'),ECHAR('i'),ECHAR('n'),ECHAR('t'),ECHAR('e'),
					ECHAR('d'),ECHAR(' '),ECHAR('i'),ECHAR('f'),ECHAR(' '),ECHAR('h'),ECHAR('e'),ECHAR(' '),ECHAR('h'),ECHAR('e'),ECHAR('a'),ECHAR('r'),ECHAR('d'),ECHAR(' '),ECHAR('1'),
					ECHAR('0'),ECHAR('0'),ECHAR(' '),ECHAR('t'),ECHAR('i'),ECHAR('m'),ECHAR('e'),ECHAR('s'),ECHAR(' '),ECHAR('t'),ECHAR('h'),ECHAR('e'),ECHAR(' '),ECHAR('a'),ECHAR('m'),
					ECHAR('o'),ECHAR('u'),ECHAR('n'),ECHAR('t'),ECHAR(' '),ECHAR('o'),ECHAR('f'),ECHAR(' '),ECHAR('g'),ECHAR('i'),ECHAR('g'),ECHAR('a'),ECHAR('w'),ECHAR('a'),ECHAR('t'),
					ECHAR('t'),ECHAR('s'),ECHAR(' '),ECHAR('h'),ECHAR('e'),ECHAR(' '),ECHAR('s'),ECHAR('a'),ECHAR('i'),ECHAR('d'),ECHAR(' '),ECHAR('h'),ECHAR('e'),ECHAR(' '),ECHAR('h'),
					ECHAR('a'),ECHAR('d'),ECHAR(' '),ECHAR('i'),ECHAR('n'),ECHAR('t'),ECHAR('h'),ECHAR('e'),ECHAR(' '),ECHAR('f'),ECHAR('u'),ECHAR('t'),ECHAR('u'),ECHAR('r'),ECHAR('e'),
					ECHAR('.'), '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door121(void)
{	
	char string[] = {ECHAR('T'), ECHAR('h'), ECHAR('e'), ECHAR(' '), ECHAR('G'), ECHAR('a'), ECHAR('b'), ECHAR('e'), ECHAR('N'), ECHAR(' '), 
					ECHAR('c'), ECHAR('a'), ECHAR('n'), ECHAR('\''), ECHAR('t'), ECHAR(' '), ECHAR('s'), ECHAR('e'), ECHAR('e'), ECHAR('m'), 
					ECHAR(' '), ECHAR('t'), ECHAR('o'), ECHAR(' '), ECHAR('c'), ECHAR('o'), ECHAR('u'), ECHAR('n'), ECHAR('t'), ECHAR(' '), 
					ECHAR('t'), ECHAR('h'), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('h'), ECHAR('i'), ECHAR('g'), ECHAR('h'), ECHAR('.'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door3(void)
{
	char string[] = {ECHAR('H'), ECHAR('a'), ECHAR('v'), ECHAR('e'), ECHAR(' '), ECHAR('y'), ECHAR('o'), ECHAR('u'), ECHAR(' '), ECHAR('k'), 
					ECHAR('n'), ECHAR('o'), ECHAR('c'), ECHAR('k'), ECHAR('e'), ECHAR('d'), ECHAR(' '), ECHAR('o'), ECHAR('n'), ECHAR(' '), 
					ECHAR('E'), ECHAR('u'), ECHAR('l'), ECHAR('e'), ECHAR('r'), ECHAR('\''), ECHAR('s'), ECHAR(' '), ECHAR('d'), ECHAR('o'),
					ECHAR('o'), ECHAR('r'), ECHAR('?'),  '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door271(void)
{
	char string[] = {ECHAR('E'), ECHAR('P'), ECHAR('O'), ECHAR('C'), ECHAR('H'), ECHAR('!'), '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door111970(void)
{
	char string[] = {ECHAR('T'), ECHAR('i'), ECHAR('m'), ECHAR('e'), ECHAR(' '), ECHAR('t'), ECHAR('o'), ECHAR(' '), ECHAR('c'), ECHAR('h'), 
					ECHAR('o'), ECHAR('o'), ECHAR('s'), ECHAR('e'), ECHAR('!'), ECHAR(' '), ECHAR('R'), ECHAR('e'), ECHAR('d'), ECHAR(' '), 
					ECHAR('d'), ECHAR('o'), ECHAR('o'), ECHAR('r'), ECHAR(' '), ECHAR('o'), ECHAR('r'), ECHAR(' '), ECHAR('b'), ECHAR('l'), 
					ECHAR('u'), ECHAR('e'), ECHAR(' '), ECHAR('d'), ECHAR('o'), ECHAR('o'), ECHAR('r'), ECHAR('?'), '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void doorRed(void)
{ //Reality
	char string[] = {ECHAR('T'), ECHAR('h'), ECHAR('e'), ECHAR(' '), ECHAR('n'), ECHAR('e'), ECHAR('x'), ECHAR('t'), ECHAR(' '), ECHAR('d'),
					ECHAR('o'), ECHAR('o'), ECHAR('r'), ECHAR(' '), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('e'), 
					ECHAR(' '), ECHAR('m'), ECHAR('i'), ECHAR('s'), ECHAR('s'), ECHAR('i'), ECHAR('n'), ECHAR('g'), ECHAR(' '), ECHAR('n'), 
					ECHAR('u'), ECHAR('m'), ECHAR('b'), ECHAR('e'), ECHAR('r'), ECHAR(' '), ECHAR('f'), ECHAR('o'), ECHAR('r'), ECHAR(' '), 
					ECHAR('t'), ECHAR('h'), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('c'), ECHAR('o'), ECHAR('n'), ECHAR('s'), ECHAR('t'), 
					ECHAR('a'), ECHAR('n'), ECHAR('t'), ECHAR(':'), ECHAR(' '), ECHAR('h'), ECHAR(' '), ECHAR('='), ECHAR(' '), ECHAR('6'), 
					ECHAR('.'), ECHAR('6'), ECHAR('2'), ECHAR('6'), ECHAR(' '), ECHAR('x'), ECHAR(' '), ECHAR('1'), ECHAR('0'),  ECHAR(' '), ECHAR('^'), 
					ECHAR(' '), ECHAR('-'), ECHAR('#'), '\0' };

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door34(void)
{	
	char string[] = {ECHAR('f'), ECHAR('l'), ECHAR('o'), ECHAR('o'), ECHAR('r'), ECHAR('('), ECHAR('f'), ECHAR('u'), ECHAR('r'), ECHAR('t'), 
					ECHAR('h'), ECHAR('e'), ECHAR('s'), ECHAR('t'), ECHAR(' '), ECHAR('d'), ECHAR('i'), ECHAR('s'), ECHAR('t'), ECHAR('a'), 
					ECHAR('n'), ECHAR('c'), ECHAR('e'), ECHAR(' '), ECHAR('i'), ECHAR('n'), ECHAR(' '), ECHAR('Q'), ECHAR('W'), ECHAR('O'), 
					ECHAR('P'), ECHAR(')'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door111(void)
{
	char string[] = {ECHAR('A'), ECHAR('t'), ECHAR('o'), ECHAR('m'), ECHAR('i'), ECHAR('c'), ECHAR(' '), ECHAR('n'), ECHAR('u'), ECHAR('m'), 
					ECHAR('b'), ECHAR('e'), ECHAR('r'), ECHAR(' '), ECHAR('o'), ECHAR('f'), ECHAR(' '), ECHAR('F'), ECHAR('r'), ECHAR('a'), 
					ECHAR('n'), ECHAR('c'), ECHAR('i'), ECHAR('u'), ECHAR('m'), ECHAR('?'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door87(void)
{
	char string[] = {ECHAR('M'), ECHAR('a'), ECHAR('n'), ECHAR('y'), ECHAR(' '), ECHAR('j'), ECHAR('e'), ECHAR('d'), ECHAR('i'), ECHAR(' '), 
					ECHAR('d'), ECHAR('i'), ECHAR('e'), ECHAR('d'), ECHAR(' '), ECHAR('b'), ECHAR('e'), ECHAR('c'), ECHAR('a'), ECHAR('u'), 
					ECHAR('s'), ECHAR('e'), ECHAR(' '), ECHAR('o'), ECHAR('f'), ECHAR(' '), ECHAR('t'), ECHAR('h'), ECHAR('i'), ECHAR('s'), 
					ECHAR(' '), ECHAR('o'), ECHAR('r'), ECHAR('d'), ECHAR('e'), ECHAR('r'), ECHAR('.'), ECHAR('.'), ECHAR('.'), ECHAR(' '), 
					ECHAR(':'), ECHAR(')'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door66(void)
{
	char string[] = {ECHAR('d'), ECHAR('1'), ECHAR('7'), ECHAR('d'), ECHAR('2'), ECHAR('2'), ECHAR('6'), ECHAR('c'), ECHAR('c'), ECHAR('c'), 
					ECHAR('2'), ECHAR('b'), ECHAR('5'), ECHAR('3'), ECHAR('b'), ECHAR('c'), ECHAR('7'), ECHAR('e'), ECHAR('4'), ECHAR('1'), 
					ECHAR('2'), ECHAR('0'), ECHAR('9'), ECHAR('8'), ECHAR('2'), ECHAR('a'), ECHAR('b'), ECHAR('e'), ECHAR('c'), ECHAR('4'), 
					ECHAR('5'), ECHAR('6'), ECHAR('e'), ECHAR('6'), ECHAR('2'), ECHAR('7'), ECHAR('d'), ECHAR('6'), ECHAR('0'), ECHAR('c'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void doorBlue(void)
{ //Not Reality
	char string[] = {ECHAR('1'), ECHAR('1'), ECHAR('0'), ECHAR('0'), ECHAR('0'), ECHAR('0'), ECHAR('1'), ECHAR('0'), ECHAR('0'), ECHAR('1'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door777(void)
{	
	char string[] = {ECHAR('2'), ECHAR('4'), ECHAR(' '), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('g'), ECHAR('r'), ECHAR('e'), ECHAR('a'), 
					ECHAR('t'), ECHAR('.'), ECHAR(' '), ECHAR('B'), ECHAR('u'), ECHAR('t'), ECHAR(' '), ECHAR('d'), ECHAR('o'), ECHAR(' '), 
					ECHAR('y'), ECHAR('o'), ECHAR('u'), ECHAR(' '), ECHAR('k'), ECHAR('n'), ECHAR('o'), ECHAR('w'), ECHAR(' '), ECHAR('w'), 
					ECHAR('h'), ECHAR('a'), ECHAR('t'), ECHAR('\''), ECHAR('s'), ECHAR(' '), ECHAR('b'), ECHAR('e'), ECHAR('t'), ECHAR('t'), 
					ECHAR('e'), ECHAR('r'), ECHAR('?'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door25(void)
{
	char string[] = {ECHAR('s'), ECHAR('q'), ECHAR('r'), ECHAR('t'), ECHAR('('), ECHAR('-'), ECHAR('2'), ECHAR('5'), ECHAR(')'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door5i(void)
{
	char string[] = {ECHAR('T'), ECHAR('h'), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('i'), ECHAR('s'), ECHAR(' '), ECHAR('t'), ECHAR('h'), 
					ECHAR('e'), ECHAR(' '), ECHAR('m'), ECHAR('e'), ECHAR('a'), ECHAR('n'), ECHAR('i'), ECHAR('n'), ECHAR('g'), ECHAR(' '), 
					ECHAR('o'), ECHAR('f'), ECHAR(' '), ECHAR('l'), ECHAR('i'), ECHAR('f'), ECHAR('e'), ECHAR('.'), '\0'};
	
	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void door42(void)
{
	char string[] = {ECHAR('D'), ECHAR('E'), ECHAR('A'), ECHAR('D'), ECHAR(' '), ECHAR('E'), ECHAR('N'), ECHAR('D'), ECHAR('!'), '\0'};

	puts(dec(string, sizeof(string)-1));
	_exit(1);
}

void start(void)
{
	char input[512];

	fgets(input, sizeof(input), stdin);

	printf(input);
	exit(1);
}

int main()
{
	if(ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
	{
		puts("Nice try!");
		return(-1);
	}

	puts("Choose a door, any door! Perhaps start with door 1?");
	start();

	return(0);
}