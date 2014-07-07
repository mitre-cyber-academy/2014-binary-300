#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int bullseye;
int answer = 0;

void doorwithkey(void)
{
	printf("Did you really think it would be that easy? ( ͡° ͜ʖ ͡°)\n");
	_exit(1);
}

void door0(void)
{
	printf("Try the door that Vegeta would yell about.\n");
	_exit(1);
}

void door1(void)
{
	printf("Silly human. Try starting from where computers start counting!\n");
	_exit(1);
}

void door9001(void)
{
	printf("Remember that world cup year when Zidane headbutted Materazzi?\n");
	_exit(1);
}

void door2006(void)
{
	printf("Doctor Brown would have fainted if he had heard 100 times the amount of gigawatts he said he had in the future.\n");
	_exit(1);
}

void door121(void)
{
	printf("The GabeN can't seem to count this high.\n");
	_exit(1);
}

void door3(void)
{
	printf("Have you knocked on Euler's door?\n");
	_exit(1);
}

void door271(void)
{
	printf("EPOCH!\n");
	_exit(1);
}

void door111970(void)
{
	printf("Time to choose! Red door or blue door?\n");
	_exit(1);
}

void doorRed(void)
{ //Reality
	printf("The next door is the missing number for this constant: h = 6.626 x 10 ^ -#\n");
	_exit(1);
}

void door34(void)
{
	printf("floor(furthest distance in QWOP)\n");
	_exit(1);
}

void door111(void)
{
	printf("Atomic number of Francium?\n");
	_exit(1);
}

void door87(void)
{
	printf("Many jedi died because of this order... :(\n");
	_exit(1);
}

void door66(void)
{
	char itMoves[] = "d17d226ccc2b53bc7e4120982abec456e627d60c";

	printf("%s\n", itMoves);
	_exit(1);
}

void doorBlue(void)
{ //Not Reality
	printf("1100001001\n");
	_exit(1);
}

void door777(void)
{
	printf("24 is great. But do you know what's better?\n");
	_exit(1);
}

void door25(void)
{
	printf("sqrt(-25)\n");
	_exit(1);
}

void door5i(void)
{
	printf("This is the meaning of life.\n");
	_exit(1);
}

void door42(void)
{
	printf("DEAD END!\n");
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
	puts("Choose a door, any door! Perhaps start with door 1?");
	start();

	return(0);
}