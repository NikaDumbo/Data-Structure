#include <iostream>

using namespace std;

struct Node{
	int value;
	Node *next;
};

class Queue{
	private:
		Node *bolo;
		Node *wina;
	public:
		Queue(){
			bolo = 0;
			wina = 0;
		}
		
		void damateba(int x){
			Node *temp = new Node();
			
			temp->value=x;
			temp->next=0;
				
			if(bolo == 0){
				
				bolo = temp;
				wina = temp;
			}
			else{
				
				bolo->next = temp;
				bolo=temp;
				
			}		
		}
			
		void washla(){
			if(bolo != 0){
				Node *x = wina;
				wina=wina->next;
				if(wina==0){
					bolo=0;
				}
			}
			else{
				cout << "Rigi carielia" << endl;
			}
		}
		
		void display(){
			Node *x = wina;
			while(x != 0){
				cout << x->value << " ";
				x = x->next;  
			}
		} 
		
};

int main(int argc, char** argv) {
	
	Queue *A = new Queue();
	
	A->damateba(5);
	A->damateba(2);
	A->damateba(3);
	A->damateba(1);
	
	A->display();
	
	cout<<endl<<endl;
	
	A->washla();
	A->display();
	
	
	return 0;
}
