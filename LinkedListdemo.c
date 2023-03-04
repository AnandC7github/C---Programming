#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node ll;
ll* insertNode(ll* h,int d){
	ll* newnode=(ll*)malloc(sizeof(ll));
	newnode->data=d;
	newnode->next=NULL;
	if(h==NULL){
		h=newnode;
		return h;
	}
	ll* t;
	for(t=h;t->next!=NULL;t=t->next);
		t->next=newnode;
	return h;
}
ll* deleteNode(ll* h,int key){
	ll* t;
	if(h==NULL){
		printf("\n!List Empty!");
		return h;
	}
	if(h->data==key){
		t=h;
		h=h->next;
		free(t);
		return h;
	}
	for(t=h;t->next!=NULL && t->next->data!=key;t=t->next);
		if(t->next==NULL)
			printf("\n!Node Does Not Exist!");
		else{
			ll* t1=t->next;
			t->next=t->next->next;
			free(t1);
		}
	return h;
}
int countLL(ll* h){
	int count=0;
	ll* t;
	if(h==NULL){
		printf("\n!List Empty!");
		return -1;
	}
	for(t=h;t!=NULL;t=t->next)
		count++;
	return count;
}
int searchLL(ll* h,int key){
	ll* t;
	int count=1;
	if(h==NULL){
		printf("\n!List Empty!");
		return -1;
	}
	for(t=h;t!=NULL && t->data!=key;t=t->next)
		count++;
	if(t==NULL)
		return -1;
	return count;
}
void display(ll* h){
	ll* t;
	if(h==NULL)
		printf("\n!List Empty!");
	else{
		printf("\nLinked List :");
		for(t=h;t!=NULL;t=t->next)
			printf("\n%d",t->data);
	}
}
int main(){
	ll* head=NULL;
	int data,ch,found;
	printf("\nLINKED LIST :\n----------------------\n1.Insert\n2.Delete\n3.Search\n4.Count\n5.Display\n6.Exit\n\tChoose One of the above.");
	do{
		printf("\nEnter Option : ");
		scanf("%d",&ch);
		switch(ch){
			case 1 :printf("\nEnter Data : ");
					scanf("%d",&data);
					head=insertNode(head,data);
					break;
			case 2 :printf("\nEnter Data to be Deleted: ");
					scanf("%d",&data);
					head=deleteNode(head,data);
					break;
			case 3 :printf("\nEnter Data to Search: ");
					scanf("%d",&data);
					found=searchLL(head,data);
					if(found!=-1)
						printf("\n%d Found at %d",data,found);
					else
						printf("\nNot Found...");
					break;
			case 4 :found=countLL(head);
					if(found!=-1)
						printf("\nCount = %d",found);
					break;
			case 5 :display(head);
					break;
			case 6 :printf("\nCancelled...");
					break;
			default :printf("\n!Invalid Option!");
					break;
		}
	}while(ch!=6);
	return 0;
}

