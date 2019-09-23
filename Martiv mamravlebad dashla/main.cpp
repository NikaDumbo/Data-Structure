#include <iostream>
#include <cmath>

using namespace std;

void MartGamk(int n) 
{ 
	while (n % 2 == 0) 
	{ 
		cout << 2 << " "; 
		n = n/2; 
	} 
	
	for (int i = 3; i <= sqrt(n); i+=2) 
	{ 
		while (n % i == 0) 
		{ 
			cout << i << " "; 
			n = n/i; 
		} 
	} 

	if (n > 2) 
		cout << n << " "; 
} 


int main(int argc, char** argv) {
	
	int n = 0;
	cout << "Enter number: "; cin >> n;
	
	MartGamk(n);
	cout << endl;
	
	system("pause");
	return 0;
}
