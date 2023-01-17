#include "../lib/minunit.h"
#include "../src/is_positive.c"

static int number;
static int test_ispositive;
static int func_ispositive;

MU_TEST(my_first_test)
{

	number = 10;
	test_ispositive = 1;
	func_ispositive = is_positive(number);

	mu_assert_int_eq(test_ispositive, func_ispositive);
}

MU_TEST(using_negative_inputs)
{

	number = -1;
	test_ispositive = 0;
	func_ispositive = is_positive(number);

	mu_assert_int_eq(test_ispositive, func_ispositive);
}

MU_TEST(input_zero)
{

	number = 0;
	test_ispositive = 1;
	func_ispositive = is_positive(number);

	mu_assert_int_eq(test_ispositive, func_ispositive);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(my_first_test);
	MU_RUN_TEST(using_negative_inputs);
	MU_RUN_TEST(input_zero);
}

int	main(int argc, char *argv[])
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
