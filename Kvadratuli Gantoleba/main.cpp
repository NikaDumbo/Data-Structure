#include <iostream>
#include <cmath>

using namespace std;

class KvGant{
	private:
		double A;
		double B;
		double C;
	public:
		KvGant(){
			A = 0;
			B = 0;
			C = 0;
		}
		
		KvGant(double a, double b, double c){
			Set(a,b,c);
		}
		
		void Set(double a, double b, double c){
			A = a;
			B = b;
			C = c;
		}
		
		double D(){
			return A*A - 4*A*C;
		}
		
		void X(){
			if(D() < 0)
				cout << "Ar aqvs amonaxsni!" << endl;
					else if(D() > 0){
						cout<< "X1=" << (-B - sqrt(D())) / 2*A << endl;
						cout<< "X2=" << (-B + sqrt(D())) / 2*A << endl;
						}
						else
							cout << -B/2*A << endl;
		}
		
};

int main(int argc, char** argv) {
	
	double a = 0; cout<< "a="; cin >> a;
	double b = 0; cout<< "b="; cin >> b;
	double c = 0; cout<< "c="; cin >> c;
	
	KvGant gant = KvGant(a,b,c);
	gant.X();
	
	
	return 0;
}
