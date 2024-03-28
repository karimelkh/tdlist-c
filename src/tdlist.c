/**
 * TDLIST - simple cli app for managing To-Dos
 * this is the c version of the app (the 1st was in c++)
 * repo: https://github.com/karimelkh/tdlist-c
 */

#include "tdlist.h"

int main(int argc, char* argv[])
{
	int done = FAIL_VAL;
	if(argc == 1)
		done = prompt();
	else if(argc <= MAX_ARGS)
		done = process_args(argc, argv);
	if(argc > MAX_ARGS || done == FAIL_VAL)
	{
		display_help();
		return 1;
	}
	display_help();
	return 0;
}
