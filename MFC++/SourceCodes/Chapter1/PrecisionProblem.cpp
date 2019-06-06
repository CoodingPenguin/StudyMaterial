/* Source by Exceptional C++ Style, Item 30.
 *
 * Topic - 부동소수점 연산 시에는 정밀도 손실을 항상 경계하자.
 */

int main()
{
	double d = 1e8;

	while (d > 0)
	{
		d--;
	}

	return 0;
}

// If double is replaced with float, then what's an output of the program?