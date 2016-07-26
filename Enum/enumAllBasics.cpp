#include <stdio.h>
enum Weekdays  { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum Codes { ERROR=-5, DEBUG=2, INFO, CRITICAL=20};

//enum color { Red, White, Blue, Green };
//enum mood { Happy, Blue, Excited };

// Blue is not allowed when declared at two places in enum.
// because Enum and Enum members are global in scope
//Solution (since C++11)
enum class color { Red, White, Blue, Green };
enum class mood { Happy, Blue, Excited };
int main()
{
	int today = Sunday;// valid
	Weekdays tomorrow=Monday;
	color paintBrush = color::Blue;
	mood howFeel = mood::Blue;
	printf("%d\n", INFO);//prints 3
	printf("%d\n", sizeof(Weekdays));//prints 4
}