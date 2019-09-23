#include <iostream>

using namespace std;

void shualedi(int a, int b){
	for(int i=a; i<=b; i++){
		if(i % 2 == 0){
			cout << i << " ";
		}
	}
}

int main(int argc, char** argv) {
	
	int a; cout << "a="; cin >> a;
	int b; cout << "b="; cin >> b;
	shualedi(a,b);
	
	return 0;
}
