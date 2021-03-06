#include "./atoi/basic_tests_atoi.h"
#include "./strlen/basic_tests_strlen.h"
#include "./stress/basic_tests_stress.h"
#include "./error/basic_tests_error.h"
#include <stdio.h>

int	main(void)
{
	printf(BOLDGREEN"*********************************\n");
	printf("**      42 - Unit Tests      ****\n");
	printf("*********************************\n"RESET);
	strlen_launcher();
	atoi_launcher();
	stress_launcher();
	error_launcher();
}
