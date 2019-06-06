/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 다양한 상수 표기를 활용하자.
 */

int main()
{
	long long bigNumber = 1257842545684457; // Oops
	long double bigRealNumber = 0.34782748329748329; // Oops

	long long bigNumber_2 = 1257'8425'4568'4457; // Good!
	long double bigReadNumber_2 = 0.34'782'748'329'748'329; // Good!

	return 0;
}
