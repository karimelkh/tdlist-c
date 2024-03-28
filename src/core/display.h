/** display.h
* functions for displaying messages(errors, warnings, ...) and tables to the stdout:
*	- void display_help()
*	- ...
*
*/

/**
* @brief display the help message
*/
void display_help()
{
	printf("tdlist - simple cli app for managing To-Do lists\n\
			usage:\n\
			-a\t\tadding todos\n\
			-r\t\tremove todos\n\
			-d\t\tdisplay todos\n\
	");
}


