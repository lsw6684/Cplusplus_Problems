#include <iostream>
using namespace std;
int main() {
	float w, h, b;
	cin >> w >> h >> b;
	printf("%.2f MB", (w * h * b) / (8 * 1024 * 1024));
	system("pause");
	return 0;
}