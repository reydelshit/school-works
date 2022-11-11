#include <stdio.h>
#include <stdlib.h>


struct stack{
    char data;
    struct stack *next;
};

struct stack *top = NULL;

void push(char data){
    struct stack *new = (struct stack*)malloc(sizeof(struct stack));
    new->data = data;
    new->next = top;
    top = new;
}

char pop(){
    struct stack *temp = top;
    char data = temp->data;
    top = top->next;
    free(temp);
    return data;
}

//queue

struct queue{
    char data;
    struct queue *next;
};

struct queue *front = NULL;

void enqueue(char data){
    struct queue *new = (struct queue*)malloc(sizeof(struct queue));
    new->data = data;
    new->next = NULL;
    if(front == NULL){
        front = new;
    }else{
        struct queue *temp = front;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
    }
}

char dequeue(){
    struct queue *temp = front;
    char data = temp->data;
    front = front->next;
    free(temp);
    return data;
}

int main(){
    char word[100];
    int i = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    while(word[i] != '\0'){
        push(word[i]);
        enqueue(word[i]);
        i++;
    }
    int flag = 0;
    while(top != NULL){
        if(pop() != dequeue()){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("The word is a palindrome");
    }else{
        printf("The word is not a palindrome");
    }
    return 0;
}



