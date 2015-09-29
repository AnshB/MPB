#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
#include "status.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
			/*Queue implementation to add users to the waiting list if the train is fully booked*/
int front = -1, rear = -1;
int *p, *q, *r
data a[size], b[size], c[size], d[size], e[size], f[size]; /*Each array is for different trains. User will enter train no and accordingly the correct train will be accessed*/
int wnum = 0;                              /*Waiting number*/

void Isfull() {
	if(rear == (size - 1)) {
		printf("Booking not allowed\n");
		return;
	}
}

void Isempty() {
	if(front == -1 && rear == -1) {
		printf("Your waiting no is 1\n");
		return;
	}
	return;
}

void Enqueue(int id) {
	
	if(rear == (size - 1)) {
		printf("Queue is full\n"); 

	}
	else if(front == -1 && rear == -1) {	
		front = 0;
		rear = 0;
		a[rear].id = id;
		a[rear].waiting_no = ++wnum;
	}
	else {
		rear = rear + 1;
		a[rear].id = id;
		a[rear].waiting_no = ++wnum;
	}
	return;
}

void Dequeue() {
	if(front == -1 && rear == -1) {
		printf("Queue is empty\n");
	}
	else if(front == rear) {
		printf("Element deleted:%s\t%d\n", a[front].id, a[front].waiting_no);		
		front = -1;
		rear = -1;
		
	}
	else {
		printf("Element deleted:%s\t%d\n", a[front].id, a[front].waiting_no);		
		front = front + 1;
		wnum--;
	} 
}

void DisplayQueue() {
	int i = front;
	if(front == -1 && rear == -1) {
		printf("No waiting\n");	
	}
	else {
		while(i <= rear) {
			printf("%s\t%d\n", a[i].id, a[i].waiting_no);
			i++;
		}
	} 
	return;
}
