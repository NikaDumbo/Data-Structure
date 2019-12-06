#include <iostream>

using namespace std;

struct Node
{
	int Value;
	Node *Next;
	Node(){Value=0;Next=0;}
};

class Stack
{
	private:
		Node *Top;
	public:
		Stack(){Top=0;}
		void Add(Node *Elem)
		{
			if (Top==0) {Top=Elem; return;}
			Elem->Next=Top;
			Top=Elem;
		}
		void AddKey(int k)
		{
			Node *Elem=new Node();
			Elem->Value=k;
			Elem->Next=0;
			if (Top==0) {Top=Elem; return;}
			Elem->Next=Top;
			Top=Elem;
		}
		void Remove()
		{
			if (Top==0) return;
			Node *x=Top->Next;
			if (x==0) return;
			Top->Next=0;
			Top=x;
		}
		void Print()
		{
			Node *x=Top;
			if (Top==0) return ;
			while (x->Next!=0)
			{
				cout<<x->Value<<" ";
				x=x->Next;
			}
			cout<<x->Value;
		}
};

int main(int argc, char** argv) {
	
	Stack *A = new Stack();
	A->AddKey(5);
	A->AddKey(2);
	A->AddKey(8);
	A->AddKey(1);
	A->Print();
	cout<<endl;
	
	A->Remove();
	
	cout<<endl;
	
	A->Print();
	
	
	return 0;
}
