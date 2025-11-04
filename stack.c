#include<stdio.h>
#include<conio.h>
#define MAX 100

void push();
void pop();
void display();
int stack[MAX];
int top = -1;

int main() {
    int choice, value;
    while(1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
void push() {
    int value;
    if(top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow! Cannot pop from empty stack\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

/* OUTPUT:-
Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 1
1 pushed to stack     

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 2
2 pushed to stack

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 3
3 pushed to stack

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
3 popped from stack

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 4
4 pushed to stack

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements are:
4
2
1

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
} */
