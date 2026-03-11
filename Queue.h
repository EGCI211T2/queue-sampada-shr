
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
if(new_node!=NULL){ 
    if(size>0) {tailPtr->set_next(new_node); }
    else {headPtr=new_node;}
    tailPtr=new_node; size++;
    /* Add head and tail for me please */
  // 1. connect & Change tail
 // 2. (may be) change head  when the queue is empty
 // 3. increase size */
 }
 else{ cout<<"no memory.\n";}
}

int Queue::dequeue(){
  if(size>0){
    if (headPtr!=NULL){
            NodePtr t=headPtr;
            int value= t->get_value();
            headPtr= headPtr->get_next();
            size--;
            delete t;
            return value;
    }
     /* Add head and tail for me please */
  }
  cout<<"Empty Queue"<<endl;
  return -1;
}


Queue::Queue(){
    size=0;
    headPtr=NULL;
    tailPtr=NULL;
    
}
Queue::~Queue(){
      cout<<"Dequeue all"<<endl;
    //delete all remaning Queue (i.e. DQ all) 
    for(int i=0;i<size;i++) dequeue();
}


#endif
