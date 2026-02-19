#include<iostream>
using namespace std;

void order(int (&arr)[5], int &rear, int &front, int &size){

    if(front == -1 && rear == 4){
        cout<<"You can not order this time."<<endl;
        cout<<"------------------------------------------------"<<endl;
    }else{
    
        rear = (rear + 1) % 5;
        arr[rear] = 1;
        size++;
        cout<<"***Place order Successfull****"<<endl;
        cout<<"------------------------------------------------"<<endl;
    }

}

void sever(int (&arr)[5],int &rear, int &front, int &size){

    if(front == rear){
        cout<<"There are No order Available."<<endl;
        cout<<"------------------------------------------------"<<endl;
    }else{

        front = (front + 1) % 5;
        size--;
        cout<<"****Serve Order Succesfully****"<<endl;
        cout<<"------------------------------------------------"<<endl;
    }
}

void dispay(int (&arr)[5], int &size){
    cout<<"------------------------------------------------"<<endl;
    cout<<"**** Orders in Queue ****"<<endl;
    for (int i = 0; i<size; i++){

        cout<<arr[i]<<endl;
    }
    cout<<"------------------------------------------------"<<endl;

}
int main(){

    int arr[5] = {};
    int front = -1;
    int rear = -1;
    int size = 0;



    bool looper = true;
    while(looper == true){
        cout<<"Enter Your Choice:"<<endl;
        cout<<"1.Place Order"<<endl;
        cout<<"2.Serve Order"<<endl;
        cout<<"3.Display()"<<endl;
        cout<<"4.Exit()"<<endl;
        cout<<"------------------------------------------------"<<endl;
        int choice;
        cin>>choice;
        cout<<"------------------------------------------------"<<endl;
        switch (choice)
        {
        case 1:
            /* code */
            order(arr, rear,front, size);
            break;
        
        case 2:
            /* code */
            sever(arr, rear, front, size);
            break;
        
        case 3:
            /* code */
            dispay(arr,size);
            break;

        case 4:
            /* code */
            looper = false;
            break;

        default:
            cout<<"Enter Valid Choice";
            cout<<"------------------------------------------------"<<endl;
            break;
        }
    }
    

}