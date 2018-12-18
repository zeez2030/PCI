#include <iostream>

using namespace std;
 int front =-1 , rear=-1;
 int x[2];

bool isEmpty(){
    if(front==-1 && rear==-1)return true;
    else return false;
}

void Enqueue(int y){
    if(rear == 1){
        cout<<"Queue is full"<<endl;
    }
    else if(isEmpty()){
        front = 0;
        rear=0;
    }
    else{
        rear+=1;
    }
    x[rear]=y;

}

void Dequeue(){
    if(isEmpty()){
        cout<<"Array is empty"<<endl;
    }
    else if(front == rear){
        front = -1 ;
        rear=-1;
    }
    else
        front+=1;

}
int main()
{
    Enqueue(5);
    Enqueue(10);
    Dequeue();
    Enqueue(100);
    Dequeue();
    Dequeue();
    Enqueue(100);
    Enqueue(100);
    Enqueue(100);
    Enqueue(100);
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Enqueue(100);
    Enqueue(100);
    Enqueue(100);
    Dequeue();
    Dequeue();
    Dequeue();
    cout<<isEmpty()<<endl;
for(int i = front ; i<=rear ; i++){
    if(i==-1){

        break;
    }

    cout<<x[i]<<endl;

}
cout<<front<<" "<<rear;

}
