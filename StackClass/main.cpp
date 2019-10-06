#include <iostream>

using namespace std;

struct node{
	int value;
	node *next;
};

class Stack{
	private:
		node *top;
	public:
		Stack(){
			top = 0;
		}
		
		void push(int data){
			node *temp;
      		temp=new node;
      		temp->value=data;
      		temp->next=top;
      		top=temp;
			cout << temp->value << " added" << endl;
		}
		
		void pop(){
			if(top!=0)
      {     
            node *temp=top->next;
			top->next=0;
			top=temp;
            cout<<temp->value<<"deleted" << endl;
      }
      else
            cout<<"Stack empty" << endl;
		}
		
		void display(){
			node *temp=top;
			if (top==0) return;
			while (temp->next!=0)
			{
				cout<<temp->value<<" ";
				temp=temp->next;
			}
			cout<<temp->value << endl;
		}
};

int main(int argc, char** argv) {
	
	Stack myStack;
	int choice, data;
	
	do{
		cout << endl;
		cout << "Enter you choice" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Add element" << endl;
		cout << "2. Delete element" << endl;
		cout << "3. Display stack" << endl;
		cout <<"------------------" << endl;
		
		cout <<"Choice: "; cin >> choice;
		
		switch(choice){
			case 1:
				cout <<"Enter new value: "; cin>>data;
				system("cls");
				myStack.push(data);
				break;
			case 2:
				system("cls");
				myStack.pop();
				break;
			case 3:
				system("cls");
				myStack.display();
				break;
				
		}
		
	}while(choice!=0);
	
	
	system("pause");
	return 0;
}
