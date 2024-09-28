#include <iostream>

using namespace std;

const int X = 20;

const int Y = 20;

char mesa[X][Y];

char mapear(char mesa[X][Y]) {

	for (int i = 0; i < X * Y; i++) {

		for (int a = 0; a < X ; a++) {

			mesa[i][a] += 254;


		}
			

	}
	return mesa  ;
}
int main() {
	mesa[X][Y]=mapear(mesa[X][Y]);


	
	
	
	return 0;
}