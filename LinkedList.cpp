#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
    int data;
    struct node * next;
};
void linkedlist(struct node * emni){
    while(emni !=NULL){
        cout<<"Element: "<< emni -> data<<endl;
        emni = emni->next;
    }


}
int main(){
    struct node * head;
    struct node * second ;
    struct node * third;

    head = (struct node *)malloc(sizeof(struct node));
    second =(struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;


    linkedlist(head);


return 0;
}
