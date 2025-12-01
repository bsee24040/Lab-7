#include <iostream>
using namespace std;
class node {
public:
	int data;//to store data
	node* next;//save the next node address
	//making constructor to intialized the values
	node(int val) {
		data = val;
		next = nullptr;
	}
};
//making other class of stack
class stack {
	//making new node that represented top
	node* top;
public:
	//making constructor to intialized the values
	stack() {
		top = nullptr;
	}
	//making function of empty function
	bool empty() {
		return top== nullptr;
		
	}
	//making function of push
	void push(int value) {
		node* newnode = new node(value);//making new node
		newnode->next = top;//store the addres of next node
		top = newnode;
		cout << value << " push the value \n";
	}
	//making function for pop
	void pop() {
		if (empty()) {
			cout << "Stack is empty \n";
			return;
		}
		else {
			node* tep = top;//making node to store top  value in it
			cout << top->data << " pop from top\n ";
			top = top->next;//making new top 
			delete tep;//delete value of temp
		}
	}//making function for peek
	void peek() {
		if (empty()) {
			cout << "Stack is empty \n";
		}
		else {
			cout << "Top is = " << top->data<<endl;
		}
	}
};
int main() {
	stack MA;//making object of class
	int value, choice;//choice and value taking from user
	while (true) {
		cout << "------------Stack Menu--------------\n";
		cout << "   1.Push Element\n";
		cout << "   2.Pop Element\n";
		cout << "   3.Peek Element\n";
		cout << "   4.check stack is empty\n";
		cout << "   5.Exit\n";
		cout << "Enter Your Choice :";
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter the value :";
			cin >> value;
			MA.push(value);
			break;
		}
		case 2: {
			if (MA.empty()) {
				cout << "Stack is empty\n";
			}
			else {
				MA.pop();
			}break;
		}case 3: {
			if (MA.empty()) {
				cout << "Stack is empty\n";
			}
			else {
				MA.peek();
			}break;
		}
		case 4: {
			if (MA.empty()) {
				cout << "Stack is empty\n";
			}
			else {
				cout << "Stack is not empty\n";
			}break;
		}case 5: {
			cout << "Exit the program\n";
			return 0;
		}default:
			cout << "Invalid case\n";
		}
	}return 0;
}