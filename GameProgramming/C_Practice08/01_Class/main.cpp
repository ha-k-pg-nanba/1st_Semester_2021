#include<stdio.h>
#include<stdlib.h>

struct StructHoge
{
	int value;
};

class ClassHoge
{
	int value;

	void PrintHelloWorld();
};

void ClassHoge::PrintHelloWorld()
{
	printf("Hello World\n");
}

int main()
{
	StructHoge struct_hoge;
	ClassHoge class_hoge;

	struct_hoge.value = 1;

	class_hoge.value = 10;
	class_hoge.PrintHelloWorld();

	system("pause");
	return 0;
}