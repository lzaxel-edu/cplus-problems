#include <iostream>
int problem1();
int problem2();
int problem3();
int problem4();
int problem5();
int onceMore();

int main() {
	problem2();
	if (onceMore())
	{
		main();
	}
}