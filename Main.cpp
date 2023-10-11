#include <iostream>
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
int onceMore();

int main() {
	problem5();
	if (onceMore())
	{
		main();
	}
}