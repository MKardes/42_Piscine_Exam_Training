#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	write(1, "z", 1);
	return (0);
}
