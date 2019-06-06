/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - const 변수를 여러 파일에서 공유하려 할 때는 주의하자.
 */

extern const int foo; // !?

void f()
{
	int n = foo;
}