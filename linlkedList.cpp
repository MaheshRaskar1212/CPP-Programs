#include <iostream>
using namespace std;

struct Node {
    int prn;
    std::string name;
    Node* next;

    Node(int prn, std::string name){
        this->name = name;
        this->prn = prn;
        this->next = nullptr;

    }
};

//Add President
void addPresident(Node* &head){

    
    int prn;
    std::string name;

    cout<<"Enter PRN:"<<endl;
    cin>>prn;
    cout<<"Enter Name:"<<endl;
    cin>>name;

    Node* add = new Node(prn,name); 
    add->next = head;
    head = add;

    cout<<"Add President Successfully"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

}

//Add Secretury
void addSecretury(Node* &head){

    int prn;
    std::string name;

    cout<<"Enter PRN:"<<endl;
    cin>>prn;
    cout<<"Enter Name:"<<endl;
    cin>>name;
    Node* add = new Node(prn,name); 
    Node* temp = head;

    while(temp->next!=nullptr){
        temp = temp->next;
    }

    temp->next = add;
    add->next = nullptr;

    cout<<"Add Secretury Successfull"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

}

//Add Member
void addMember(Node* &head){

    int prn;
    std::string name;
    int pos;

    cout<<"Enter PRN:"<<endl;
    cin>>prn;
    cout<<"Enter Name:"<<endl;
    cin>>name;
    cout<<"Enter Position"<<endl;
    cin>>pos;

    Node* counter = head;
    int count = 0;
    while(counter!=nullptr){
        counter = counter->next;
        count++;
    }

    if((pos < count) || (pos > 1)){


        Node* add = new Node(prn,name); 
        Node* temp = head;

        for(int i = 2; i<pos; i++){
            temp = temp->next;
        }

        add->next = temp->next;
        temp->next = add;

        cout<<"Add Member Successfull"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
    }
    else{
        cout<<"Enter Valid Position"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
    }
}

//Delete Member
void deleteMember(Node* &head){
    int pos;
    cout<<"Enter Position"<<endl;
    cin>>pos;
    Node* temp = head;
    for(int i = 2 ; i<pos;i++){
        temp = temp->next;  
    }
    
    Node* del = temp->next;
    temp ->next = temp->next->next;
    delete del;
    cout<<"Delete Member Successfull"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
   
}

//Delete President
void deletePresident(Node* &head){ 

    Node* temp = head;
    head = head->next;
    delete temp;

    cout<<"Delete President Successfull"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
}

//Delete Secretury
void deleteSecretury(Node* &head){ 

    Node* counter = head;
    while(counter->next->next != nullptr){
        counter=counter->next;
    }

    Node* temp = counter->next;
    counter->next = nullptr;
    delete temp;

    cout<<"Delete Secretury Successfull"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

}

//Display
void display(Node* head){

        int count = 0;

        while(head != nullptr){
            cout<<head->prn<<":";
            cout<<head->name<<endl;
            count++;
            head = head->next;
        }
    cout<<"Total count of Members:"<<count<<endl;
    cout<<"-----------------------------------------------------"<<endl;
}

int main(){

    Node* headA = new Node (1,"presidentA");
    Node* tailA = new Node (10,"SecreturyA");
    headA->next = tailA;
    tailA->next = nullptr;

    Node* headB = new Node (1,"presidentB");
    Node* tailB = new Node (10,"SecreturyB");
    headB->next = tailB;
    tailB->next = nullptr;

    int mainChoice;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"1.Divsion A"<<endl;
    cout<<"2.Divsion B"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
 
    cout<<"Enter Your Choice"<<endl;
    cin>>mainChoice;

    if(mainChoice == 1){

        int looper1 = true;
        while(looper1 == true){
        
            int choice1;
            cout<<"-----------------------------------------------------"<<endl;
            cout<<"1.Add President:"<<endl;
            cout<<"2.Add Member:"<<endl;
            cout<<"3.Add Secretury:"<<endl;
            cout<<"4.Delete President:"<<endl;
            cout<<"5.Dlete Secretury:"<<endl;
            cout<<"6.Delete Member:"<<endl;
            cout<<"7.Display List"<<endl;
            cout<<"8.Exit"<<endl;
            cout<<"-----------------------------------------------------"<<endl;

            cout<<"Enter Choice"<<endl; 
            cin>>choice1;
           
            switch(choice1)
                    {
                    case 1:
                        /* code */
                        addPresident(headA);
                        break;
                    
                    case 2:
                        /* code */
                        addMember(headA);
                        break;
                    
                    case 3:
                        /* code */
                        addSecretury(headA);
                        break;

                    case 4:
                        /* code */
                        deletePresident(headA);
                        break;

                    case 5:
                        /* code */
                        
                        deleteSecretury(headA);
                        break;
                    case 6:
                        /* code */
                        deleteMember(headA);
                        break;

                    case 7:
                        /* code */
                        display(headA);
                        break;
                    
                    case 8:
                        /* code */
                        looper1 = false;
                        break;
                    default:
                            cout<<"Enter Valid Choice";
                            looper1 = true;
                        break;
                    }
        }    
    }

    else if (mainChoice == 2){   

    int looper2 = true;
    
    
        while(looper2 == true){

            int choice2;
            cout<<"-----------------------------------------------------"<<endl;
            cout<<"1.Add President:"<<endl;
            cout<<"2.Add Member:"<<endl;
            cout<<"3.Add Secretury:"<<endl;
            cout<<"4.Delete President:"<<endl;
            cout<<"5.Dlete Secretury:"<<endl;
            cout<<"6.Delete Member:"<<endl;
            cout<<"7.Display List"<<endl;
            cout<<"8.Exit()"<<endl;
            cout<<"-----------------------------------------------------"<<endl;

            cout<<"Enter Choice"<<endl; 
            cin>>choice2;
            
            switch (choice2)
                {
                    case 1:
                    /* code */
                    addPresident(headB);
                    break;
                
                case 2:
                    /* code */
                    addMember(headB);
                    break;
                
                case 3:
                    /* code */
                    addSecretury(headB);
                    break;

                case 4:
                    /* code */
                    deletePresident(headB);
                    break;

                case 5:
                    /* code */
                
                    deleteSecretury(headB);
                    break;
                case 6:
                    /* code */
                    deleteMember(headB);
                    break;

                case 7:
                    /* code */
                    display(headB);
                    break;
                
                case 8:
                    /* code */
                    looper2 = false;
                    break;
                default:
                        cout<<"Enter Valid Choice";
                        looper2 = true;
                    break;
                } 
        }         
    
    }else{
        cout<<"Enter Valid Choice"<<endl;
    }
    
}    
