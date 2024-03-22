#include <iostream>
#include<vector>
#include <queue>
using namespace std;

class Queue{
	public:
		int f;
		int b;
		vector<int>arr;
		Queue(int value){
			f=0;
			b=0;
			vector<int>v(value);
			arr= v;
		}
		void push(int value){
			if(b==arr.size()){
				cout<<"queue is full"<<endl;
				return;
			}
			arr[b] = value;
			b++;
		}
		void pop(){
			if(f-b==0){
				cout<<"queue is empty"<<endl;
				return;
			}
			f++ ;
		}
		int front(){
			if(f-b==0){
			cout<<"queue is empty"<<endl;
			return -1;
		}
			return arr[f];
		}
		int back(){
			if(f-b==0){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		return arr[b-1];
	}
	int size(){
		return b-f;
	}
	bool empty(){
		if(f-b==0){
			return true;
		}
		else return false;
	}
	void display(){
		for(int i=f; i<b; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main(){
	Queue q(6);
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.display();
	q.push(50);
	q.push(60);
	q.display();
	q.pop();
	q.display();
}
