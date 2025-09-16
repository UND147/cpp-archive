// Á¤ÁÖÈ£ 250916
#include <iostream>
using namespace std;

int main() 
{
	int integer;

	while (true) 
	{
		cout << "Á¤¼öÀÔ·Â : ";
		cin >> integer;


		if (integer == 0) {
			break;
		}
		int iNo1 = integer % 2;
		if (iNo1 == 0) {
			cout << "Â¦¼ö";
			cin >> integer;
		}
		else {
			cout << "È¦¼ö";
			cin >> integer;
		}
	}
}


