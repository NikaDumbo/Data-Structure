#include <iostream>
#include <string.h>

using namespace std;

template <typename T>
struct node{
    T data; 
    node *next;
};

template <typename N>
class list{
    private:
    	node<N> *head, *tail;
    public:
    	list(){
			head=NULL;
			tail=NULL;
		}
		void AddKey(N k)
		{
			node<N> *Elem=new node<N>();
			Elem->data=k;
			if (head==0) {head=Elem;tail=Elem;return;}
			if (head->data>Elem->data)
			{
				Elem->next=head;
				head=Elem;
				return;
			}
			if (tail->data<Elem->data)
			{
				tail->next=Elem;
				tail=Elem;
				return;
			}
			node<N> *y=0, *x=head;
			while (Elem->data>x->data)
			{
				y=x;
				x=x->next;
			}
			Elem->next=x;
			y->next=Elem;
		}
		
		void display(){
			node<N> *temp=new node<N>;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		
		N PrintSeparateElement(int pos){
			node<N> *current=new node<N>;
			node<N> *previous=new node<N>;
			current=head;
			for(int i=1;i<pos;i++){
				previous=current;
				current=current->next;
			}
			return current->data;
		}
	
		void delete_first(){
			node<N> *temp=new node<N>;
			temp=head;
			head=head->next;
			delete temp;
		}
		void delete_last(){
			node<N> *current=new node<N>;
			node<N> *previous=new node<N>;
			current=head;
			while(current->next!=NULL){
				previous=current;
				current=current->next;	
			}
			tail=previous;
			previous->next=NULL;
			delete current;
		}
		void delete_position(int pos){
			if(pos==1){
				delete_first();
			}
			node<N> *current=new node<N>;
			node<N> *previous=new node<N>;
			current=head;
			for(int i=1;i<pos;i++){
				previous=current;
				current=current->next;
			}
			previous->next=current->next;
		}
	
};

int main(int argc, char** argv) {
	
	list<int> A;
	A.AddKey(2);
	A.AddKey(5);
	A.AddKey(6);
	A.display();
	
	cout<<endl;
	
	list<string> B;
	B.AddKey("C");
	B.AddKey("B");
	B.AddKey("A");
	B.display();
	
	cout<<endl<<endl;
	
	cout<<A.PrintSeparateElement(1)<<" "<<B.PrintSeparateElement(1)<<endl;
	
	
	return 0;
}
