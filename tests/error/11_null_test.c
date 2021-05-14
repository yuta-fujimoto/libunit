#include "basic_tests_error.h"

int	null_test11(void)
{
	t_unit_test		*testlist;
	int				backup;
	int				pid;

	testlist = NULL;
	backup = error_test_constructor();
	pid = fork();
	if (pid == 0)
	{
		load_test(&testlist, "Error test", NULL);
		exit(0);
	}
	return (error_test_destructor(backup));
}