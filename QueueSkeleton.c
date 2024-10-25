#include <stdlib.h>
#include <stdio.h>

void push();
void pull();
void printQ();

int Q[10]={}, top=0, inQ=0 , num;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int maxSize = sizeof(Q) / sizeof(Q[0]);

int main(){
	int choice=0;
	do{
	printf("Do you want to add(1), remove(2) or quit(3)?: ");
	scanf("%d",&choice);
	if (choice==1){
		push();}
	else if (choice==2){
		pull();}
	else if (choice==3){
		break;}
	else{
		printf("Enter a valid choice.");}
	}while (choice!=3);
	return -1;
}

void printQ(){
	printf("\n");
	for(int i=0; i<maxSize; i++){
		printf("%d | ",Q[i]);
	}
	printf("\n\n");
}

void push(){
	if(inQ==10) {
		printf("array full\n");
		printQ();
	}
	else {
		printf("input a number:");
		scanf("%d",&num);
		Q[top]=num;
		printf("inserted at place %d\n",top);
		inQ++;
		top++;
		printf("%d\n",top);
		printQ();
	}

}

void pull() {
	if(inQ==0) {
		printf("array empty");
	}
	else {
		top--;
		Q[top]=0;
		printf("removed from place %d\n",top);
		inQ--;
		printQ();
	
	}
}


			
		
	
