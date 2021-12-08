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
	public:
	List();
	void print();
	void addbegin(int); ///osama
	bool deletebegin();
	void addend(int);
	void deleteend();  ///osama
	bool addposition(int,int);
	bool deleteposition(int); //osama
	void operator=(List&list);
	List(List&list);  //osama
	bool is_empty();  //osama
	int size();
	int getelemennt(int);



};