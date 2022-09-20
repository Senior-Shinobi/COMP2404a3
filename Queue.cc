#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"
//constructor
Queue::Queue() {
  head = NULL;
  tail = NULL;
}
//destructor
Queue::~Queue()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    //delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}
//checks if queue is empty
bool Queue::isEmpty(){
  if (head ==NULL){
    return true;
  }
  return false;
}
//checks head
void Queue::peekFirst(WHLocation** loc){
  if (head != NULL){
    *loc = head->data;
  } else {
    *loc = NULL;
  }
}
//pops head
void Queue::popFirst(WHLocation** loc){

  Node* newHead = head;
  if (newHead != NULL){
    *loc = head->data;
  } else {
    *loc = NULL;
  }
  head = head->next;
  delete newHead;
}
//adds to back of queue
void Queue::addLast(WHLocation* loc){
  Node* newNode;
  Node* oldTail;

  newNode = new Node;
  newNode->data = loc;
  newNode->next = NULL;
  oldTail = tail;

  if (tail != NULL)
    oldTail->next = newNode;

  tail = newNode;

  if (head ==NULL)
    head = newNode;

}
//print function
void Queue::print() const
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
