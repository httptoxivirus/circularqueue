#include<iostream>
#define size 5
using namespace std;
int f=-1 , r=-1;
void enqueue(int q[], int value) {
    if((f == 0 && r == size-1) || r+1 % size == f)
    cout<<"Queue is full \n";
    
    else if(f == -1) {
        f=0;
        r=0;
        q[r] = value;
    }
    
    else if(r == size -1) {
        r = 0;
        q[r] = value;
    }
    
    else {
        r++;
        q[r] = value;
    }
}

void dequeue(int q[]) {
    if(f == -1)
    cout<<"Queue is empty \n";

    if(f == r) {
    f = 0;
    r = 0;
    }
    
    else if(f == size-1)
        f = 0;

    else
        f++;
}

void display(int q[]) {
    if(f == -1)
    cout<<"Queue is empty and here is nothing to display \n";
    
    else if(r >= f) {
        for(int i=f ; i<=r; i++) 
        cout<<q[i]<<" ";
        cout<<"\n"<<endl;
    }
    
    else {
        for(int i=f; i<size; i++)
        cout<<q[i]<<" ";
        for(int j=0; j<f; j++)
        cout<<q[j]<<" ";
        cout<<"\n"<<endl;
    }
    
}

int main() {
    int queue[size];
    enqueue(queue,10);
    display(queue);
    return 0;
}
