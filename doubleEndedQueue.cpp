#include<iostream>
using namespace std;

//Book VIP ticket
void bookVIPTicket(string arr[], int &rearVIP, int &rear,  int &size, int &capacity){

    cout<<"---------------------------------------------------------"<<endl;
    cout<<"***** You are Booking VIP Tickets *****"<<endl;

    if(rearVIP == capacity-1){
        cout<<"Slots are Full"<<endl;
    }else{

    string name;
    cout<<"Enter Name:"<<endl;
    
    cin>>name;
    
    if(rear > rearVIP){
     rearVIP = rearVIP+1;
     arr[rearVIP] = name; 
    }
    if(rear <= rearVIP){
        rear = rear+1;
        rearVIP = rearVIP +1;
        size = size +1;
        arr[rearVIP] = name; 
    }
    cout<<"*****"<<name<<" VIP ticket book Successfully*****"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    }
}

//Book Normal Ticket
void bookTicket(string arr[],int &rear, int &size, int capacity ){

    cout<<"---------------------------------------------------------"<<endl;
    cout<<"***** You are Booking Tickets *****"<<endl;

    if(rear == capacity-1){
        cout<<"Slots are Full"<<endl;
    }else{
        string name;
        cout<<"Enter Name:"<<endl;
        cin>>name;

        rear = rear + 1;
        arr[rear] = name;
        size++;

        cout<<"*****"<<name<<" ticket book Successfully*****"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
    }

}

//Issue Ticket
void issueTicket(string arr[], int &front, int &size, int capacity ){

    cout<<"---------------------------------------------------------"<<endl;

    if(size == 0){
        cout<<"There Are No Bookings...";
    }else{
        
        front = front + 1;      
        cout<<"*****"<<arr[front]<<" ticket issue Successfully*****"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
    }
}

//Diplay Ticket List

void display(string arr[],int &front, int &size){
    cout<<"---------------------------------------------------------"<<endl;
    int ctr = 1;
    for(int i = front+1; i < size; i++){
        cout<<ctr<<" : "<<arr[i]<<endl;
        ctr++;
    }
    cout<<"---------------------------------------------------------"<<endl;
}

int main(){
    
    //Implementing D E Queue
    int capacity = 5;
    string arr[capacity] = {}; 
    int front = -1;
    int rear = -1;
    int rearVIP = -1;
    int size = 0;

    //Input Section
    int looper = true;

    while(looper == true){
        cout<<"---------------------------------------------------------"<<endl;
        int choice;
        cout<<"**** Railway Ticket Booking System ****"<<endl;
        cout<<endl;
        cout<<"1.Book VIP Ticket"<<endl;
        cout<<"2.Book Ticket"<<endl;
        cout<<"3.Issue Ticket"<<endl;
        cout<<"4.Display List"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* code */
            bookVIPTicket(arr, rearVIP, rear, size, capacity);
            break;

        case 2:
            /* code */
            bookTicket(arr, rear, size, capacity );
            break;
        
        case 3:
            /* code */
            issueTicket(arr, front, size, capacity);
            break;

        case 4:
            /* code */
            display(arr, front, size);
            break;
        
        case 5:
            /* code */
            looper = false;
            break;
        
        default:
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Enter Valid Choice"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
            break;
        }
    }

}