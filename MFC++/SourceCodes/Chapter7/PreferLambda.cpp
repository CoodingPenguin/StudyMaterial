/* Source by Effective Modern C++, Item 34.
 *
 * Topic - 함수 바인딩보다는 람다를 선호하자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <deque>
#include <chrono>

using namespace std;
using Time = chrono::steady_clock::time_point;
using Duration = chrono::steady_clock::duration;

enum class Sound
{
	Beep, Siren, Whistle
};

void setAlarm(Time t, Sound s, Duration d)
{

}

int main()
{
	using namespace std::chrono;
	using namespace std::placeholders;

	auto setAlarmLambda = [](Sound s)
	{
		setAlarm(steady_clock::now() + hours(1), s, seconds(30));
	};

	auto setAlarmBind = bind(setAlarm, steady_clock::now() + hours(1), _1, seconds(30));
	// Unexpected Result!
	// If the setAlarm function is overloaded?
	// Inlining?

	int lowVal, highVal;

	auto betweenLambda = [lowVal = lowVal, highVal = highVal](const auto& val)
	{
		return lowVal <= val && highVal >= val;
	};

	auto betweenBind = bind(logical_and<bool>(),
		bind(less_equal<>(), lowVal, _1),
		bind(less_equal<>(), _1, highVal));

	return 0;
}