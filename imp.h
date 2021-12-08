#include"class.h"


void List::addbegin(int value){
	if(is_empty()){
		head = tail = new Node(value);
	}else{
		Node* insert = new Node(value);
		insert->next = head;
		head->prev = insert;
		head = insert;
	}
}
// 10 20 30 40 50 [0]
void Cdeleteend(){
	if(is_empty()){
		return;
	}else{
		Node* index = tail;
		cout<<index<<"   "<<index->data<<endl;
		index->prev->next = 0;
		cout<<index<<"   "<<index->data;
		tail = index->prev;
		delete index;
		
	}
}
bool List::deleteposition(int);
List::List(List&list); 
bool List::is_empty(){
	return head == 0;
}

//
//////////////////////////////////////
void List::print(){
	Node*tmp= head;
	while(tmp!=0){
		cout<<tmp->data;
		tmp=tmp->next;
	}
}

bool deletebegin();
	void addend(int);
bool addposition(int,int);
void operator=(List&list);
int size(){
	Node* tmp= head;
	int size=0;
	while(tmp!=0){
	++size;
	tmp=tmp->next;
	}
	return size;
}
	int getelemennt(int);

