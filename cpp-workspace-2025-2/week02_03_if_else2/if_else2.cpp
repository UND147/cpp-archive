// 정주호 250912
#include <iostream>
using namespace std;

int main() {
	char cChar;
	cout << "문자 1개 입력 : ";
	cin >> cChar;

	if ((cChar >= 'A') && (cChar <= 'Z')
		/*'Z' >= cChar && cChar >= 'A'*/) {
		cout << "대문자";
	}
	else if (cChar >= 'a' && cChar <= 'z'
		/*'z' >= cChar && cChar >= 'a'*/) {
		cout << "소문자";
	}
	else if ((cChar >= '0') && (cChar <= '9')
		/*(cChar < 'a') && (cChar >= '0')*/) {
		cout << "숫자문자";
	}

	else {

		cout << "특수기호";
	}
}