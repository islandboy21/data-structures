#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	
	int data;
	struct Node* next;

};

	struct Node* head;

void insert(int x) {

	Node* temp = (Node*) malloc(sizeof(Struct Node));
	temp->data = x;
	temp->next = NULL;
	
	if(head != NULL){
		temp->next = head;
		head = temp;
		
	head = temp; // Why head receive temp?
}
	
void Print() {
	
	struct Node* temp = head;
	
		while(temp != NULL) {
			printf("%d", temp->data);
			temp = temp->next;
		}
		printf("/n");
}

int main() {
	
	head = NULL;
	
	
	return 0;
}
