#include<iostream>
using namespace std;

struct Node{
	Node* next;
	int data;
	Node* prev;
	Node(int data,Node* next=0,Node* prev=0){
		Node::data=data;
		Node::next=next;
		Node::prev=prev;
	}
};

class List{
	int data;
	Node* head,*tail;

	void print();
	void addbegin(int);
	bool deletebegin();
	void addend(int);
	void deleteend();
	bool addposition(int,int);
	bool deleteposition(int);
	void operator=(List&list);
	List(List&list);
	bool is_empty();



};