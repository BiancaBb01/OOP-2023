#include "main.h"

int dif(int a, int b) { return a - b; }
int imp(int a, int b) {return a / b;}
int sum(int a, int b) { return a + b; }
int mult(int a, int b) { return a * b; }

int main(int argc, char* argv[])
{
	char input[38] = "---H***E+++L+++L///O---P+++O/+-**O---";
	func Operatori[4] = {dif,sum,imp,mult};
	int S=0;
	int i;
	struct content {
		int p1;
		int p2;
	};
	Content x = { 15,0 };
	
	int idx;

	for (i = 0; i < strlen(input); i++)
	{
		switch (input[i] - 42)
		{
		case VALORI::DIFERENTA:
			idx = 2;
			x.p1 = 3;
			x.p2 = 3;
			break;

		case VALORI::SUMA:
			idx = 0;
			x.p1 = 7;
			x.p2 = 5;
			break;
		case VALORI::IMPARTIRE:
			idx = 1;
			x.p1 = 10;
			x.p2 = 1;
			break;
		case VALORI::INMULTIRE:
			idx = 3;
			x.p1 = 8;
			x.p2 = 4;
			break;
		}

		S = S + Operatori[idx](x.p1, x.p2);
	}

	//S=337
	printf("S = %d\n", S);

	return 0;
}
