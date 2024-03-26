/** process.h 
 * functions for processing the arguments
 *		- int process_args(int argc, char* argv[])
 *		- ...
 *
 * */

/**
 * @brief process the giving arguments and perform the right action
 * @param argc - arguments count
 * @param argv - arguments array
 * @return	0 if the command args are valid
 *			1 if the command args are invlid
 */
int process_args(int argc, char* argv[])
{
  printf("argc:\t\t%d\nargv[1]:\t%s\n", argc, argv[1]);
  printf("processing... done\n");
  return 0;
}
