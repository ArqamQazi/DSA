#include <stdio.h>
#define MAX 5
int arr[MAX], top = -1;

int isEmpty() {
	return top == -1;
}
int isFull() {
	return top == MAX-1;
}
void push(int element) {
	if (isFull()) {
		printf("Stack Overflow\n");
		return;
	}
	top++;
	arr[top] = element;
}
void pop() {
	if (isEmpty()) {
		printf("Stack Underflow\n");
		return;
	}
	printf("Element is removed: %d\n", arr[top]);
	top--;
}
void peek() {
	if (isEmpty()) {
		printf("Stack Underflow\n");
		return;
	}
	printf("Current element: %d\n", arr[top]);
}
int main() {
	
	isEmpty(); 
	push(10);
	peek(); // 10
	pop(); // 10 removed
	return 0;
}
