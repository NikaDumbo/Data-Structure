#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};
using namespace std;

class Stack {
	private:
		Node *Top;
	public:
		Stack(){
			Top=0;
		}
		
		void Push(int k){
			
			Node *tmp;
			tmp=new Node();
			tmp->data=k;
			tmp->next=Top;
			Top=tmp;
		}
		
		void Pop(){
			
			if(Top!=0){
				Node *tmp=Top;
				Top=Top->next;
				
			}
		}
		
		int getTop(){
			Node *tmp = Top;
			return tmp->data;
		}
		
		void print (){
			Node *tmp=Top;
			if (tmp==0) cout<<"steki carielia";
			while (tmp->next!=0){
				cout<<tmp->data<<"---";
				tmp=tmp->next;
			}
			cout<<tmp->data;
		}
};



int main(int argc, char** argv) {

	Stack A;
	Stack B;
	
	int n, data;
	
	cout <<"n= "; cin >> n;
	cout<< endl;
	
		cout << "Enter Stack A" << endl;
		for(int i=0; i<n; i++){
			cout << i+1 <<") "; cin >> data;
			A.Push(data);
		}
		
		cout << "Enter Stack B" << endl;
		for(int i=0; i<n; i++){
			cout << i+1 <<") "; cin >> data;
			B.Push(data);
		}
		//system("cls");
		
		cout << "Stack A" << endl;
		A.print();
		cout << endl;
		cout << "Stack B" << endl;
		B.print();
		cout<< endl;
		
		Stack C;
		
		for(int i=0; i<n; i++){
			C.Push(B.getTop());
			B.Pop();
		}
		
		for(int i=0; i<n; i++){
			A.Push(C.getTop());
			C.Pop();
		}
		
		cout<<endl;
		A.print();
		cout<<endl;
		
		
		
	system("pause");
	return 0;
}

// kodi rom ipovo stekis 5 elementi
/* 	for(int i=0; i<5; i++){
		B.Push(A.getTop());
		A.Pop();
	}
	
	cout << B.getTop() << endl;
	B.print();*/

