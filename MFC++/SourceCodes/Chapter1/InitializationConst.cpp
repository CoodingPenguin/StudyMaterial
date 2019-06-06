/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 초기화와 const의 관계를 파악하자.
 */

int f() { return 42; }

int main()
{
	const int number = f();

	int sample = 1;
	const int number_2 = sample;
	const int& sampleRef = sample; // if sample is changed...
	int copiedSample = number_2;
	// const int number_3; // Hmm...

	const int size = 1000;
	const int& refSize = size;
	// int& anotherRefSize = refSize; // Hmm...

	const int& fixedSize = 5000; // !?
	const int& result = size * 2; // !?!?
	// int& result_2 = size * 2; // Hmm....

	double d = 1.234;
	const double cd = 1.0;
	// double* pd = &cd; // Hmm...
	const double* cpd = &cd;
	const double* cpd_2 = &d;

	int n = 10;
	int n2 = 100;
	// int* const p; // Hmm...
	int* const pi = &n;
	*pi = 5;
	// pi = &n2; // Hmm...

	return 0;
}