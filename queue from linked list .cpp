#include <iostream>
using namespace std;

class Node{
	public:
	int value;
	Node* next;
	Node(int value){
		this->value = value;
		this->next = NULL;
	}
};

class Queue{
	public:
		Node* head;
		Node* tail;
		int s;
		Queue(){
			head = tail = NULL;
			s= 0;
		}
	
		void push(int value){
			Node* temp = new Node(value);
			if(s==0){
				head = tail = temp;
			}
			else{
				tail->next=temp ;
				tail = temp ;
			}
			s++ ;
		}

	void pop(){
		if(s <= 0 ) cout<<"queue is empty";
		else if(s == 1){
			head = tail = NULL ;
			s-- ;
		}
		else if(s>1){
			head = head->next ;
			s-- ;
		}
	}
	
	int front(){
		if(s==0){
			cout<<"queue is empty"<<endl;
			return -1;
		}
	}
	
	int back(){
		if(s==0){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		return tail->value;
	}
	
	void display(){
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->value<<" " ;
			temp = temp->next ;
		}
		cout<<endl;
	}
	int size(){
		return s;
	}
	bool empty(){
		if(s==0) return true;
		else return false;
	}
};


int main(){
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.display();
	q.push(50);
	q.push(60);
	q.push(70);
	q.display();
	q.pop();
	q.display();
	
}  



