#include <iostream>

using namespace std;

const int X = 20;

const int Y = 20;

char mapear(int X, int Y){
	
	static char* mesa[X][Y];

	for (int i = 0; i < X * Y; i++) {
		for (int a = 0; a < X ; a++) {
			mesa[i][a] += 254;
		}
	}

	return mesa[X][Y];
}
int main() {
	char mesa[X][Y] = mapear(X,Y);
	return 0;
}