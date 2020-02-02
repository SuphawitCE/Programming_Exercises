#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
int item;
struct Node *next;

};
struct Node *n = NULL,*first,*newNode,*curr;
struct Node *insertNode(int newItem,struct Node *nextNode){
struct Node *newNode;
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->item = newItem;
newNode->next = nextNode;
return(newNode);
}

void Add()
{
	int num;
	cout << "\n Add Data: ";
	cin>> num;
	first =insertNode(num,first);
}
void Show()
{
	curr = first;
	cout << "\n Data: ";
	while (curr != NULL){
			printf(" %d. ",curr->item);
	curr = curr->next;
	}
}
void Insert()
{
	 int num,ins;
	 struct Node *curr;
	 struct Node *prev;
	 curr = first;
	 prev = NULL;
	 cout << "\n Data to search :  ";
	 cin>> num;
	 while (curr != NULL)
	 {
		if (curr->item == num)
		{
				cout << "\n Data to insert :  ";
				cin>> ins;
			newNode = insertNode(ins,NULL);
			newNode->next = curr;
			prev->next =newNode;
			prev = curr;
			curr = curr->next;	
		}
		else 
		{
				prev = curr;
				curr = curr->next;	
		}
	
	}
}
void Delete()
{
	 int num,ins;
	 struct Node *curr;
	 struct Node *prev;
	 curr = first;
	 prev = NULL;
	 cout << "\n Data to search :  ";
	 cin>> num;
	 while (curr != NULL)
	 {
		if (curr->item == num)
		{
				cout << "\n Delete Data :  "<<num;
			struct Node *buff = curr->next;
			
			prev->next =buff;
			prev = curr;
			curr = curr->next;	
		}
		else 
		{
				prev = curr;
				curr = curr->next;	
		}
	
	}
}
int main(int argc, char** argv) {
	int s,num;
	cout << "\n Set up: ";
	cin>> num;
	first = insertNode(num,NULL);
	for(;;){
			cout << "\n Select \n1.Add Data\n2.Show Data\n3.Insert\n4.Delete\n5.Exit   \nmenu Select :";
				cin>> s;
	switch(s)
		{
			case 1: Add();break;
			case 2: Show();break;
			case 3: Insert();break;
			case 4: Delete();break;
			case 5: exit(0);break;
			default: std:: cout<<" \n No menu Select  ";
			
		}	
	}
return 0;
}
