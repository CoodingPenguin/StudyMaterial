/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 기존의 초기화 방식과 목록 초기화 방식의 차이점을 숙지하자.
 */

// C++11 이후 추가된 List initialization(Uniform initialization)
// 기존에는 Aggragate object, Array 등에만 사용이 가능했다.

int main()
{
	int number = 0;
	int number_2 = { 0 };
	int number_3(0);
	int number_4{ 0 };

	double d = 1.2345;
	
	float f(d); // OK
	float f2 = d; // OK
	float f3{ d }; // Hmm...
	float f4 = { d }; // Hmm...
	
	int w{ d }; // Hmm...
	int x = { d }; // Hmm...
	int y = d; // OK
	int z(d); // OK

	int n{ f * f2 * f3 }; // Hmm...
	int n2 = f * f2 * f3;
	int n3(f * f2 * f3);

	return 0;
}
