#include <iostream>
#include<cstring>
using namespace std;

struct Element{
    int data;
    string name;
    float average;
    Element *next;
};
struct List{
    int n;
    Element *head;
    Element *tail;

};
//create empty list
List *createList(){
    List *ls;
    ls= new List();
    ls->n =0;
    ls->head=NULL;
    ls->tail=NULL;
    return ls;
}
//create function to insert all number to begin
void changeToBegin(List *ls,int id,string newName,float average);
//create display list
void displayList(List *l);
//add to end list
void endOfList(List *ls,int dataNew,string newName,float average);
//check id
bool checkID(List *ls,int id);
int main(){
    List *l;
    int choice,num;
    string name;
    int id;
    float average;
    l =createList();
    while (1)
    {
        cout<<"\t\t===============================\n";
        cout<<"\t\t+Welcome to New Linked List-_-+\n";
        cout<<"\t\t===============================\n\n";
        cout<<"1.Add Student information.\n\n";
        cout<<"2.Display all student information.\n\n";
        cout<<"3.Exit.\n\n";
        cout<<"Choice:";
        cin>>choice;
        if (choice==1)
        {
            while (1)
            {
                cout<<"1.Add inform student.\n\n";
                cout<<"2.Back to main program\n\n";
                cout<<"Choice:";
                cin>>num;
                if (num==1)
                {
                    cout<<"Enter ID student:";
                    cin>>id;
                    if (!checkID(l,id))
                    {
                    cout<<"Enter student name and average score:";
                    cin>>name>>average;
                    endOfList(l,id,name,average);
                    //changeToBegin(l,id,name,average);

                }else
                {
                cout<<"\t\tIt is exist in list!Please try again.\n\n";
                }        
                }else if (num==2)
                {
                    
                    break;
                }

            }
            
        }else if (choice==2)
        {
            displayList(l);
        }else if (choice==3)
        {
            cout<<"Exit.\n\n";
            break;
        }
    }
    

}   
//create function to insert all number to begin
void changeToBegin(List *ls,int id,string newName,float average)
{
  Element*e;
    e = new Element();
    e->data =id;
    e->average=average;
    e->name=newName;
    e->next=ls->head;
    ls->head=e;
    if (ls->n==0)
    {
       ls->tail =e;
    }
    ls->n=ls->n+1;
    

}
//Display list
void displayList(List *l){
    Element *tmp;
    tmp =l->head;
    cout<<"\t\tID|Sname|Average\n\n";
    while (tmp!=NULL)//run to null 
    {
        cout<<"\t\t"<<tmp->data<<"|"<<tmp->name<<"|"<<tmp->average<<endl<<endl;
        tmp = tmp->next;
    }
    cout<<endl;

}
//add to end ofo  list
void endOfList(List *ls,int dataNew,string newName,float average){
    Element *e;
   e=new Element();
  
    if (ls->n==0)
    {
        ls->tail=e;
       changeToBegin(ls,dataNew,newName,average);
        ls->head=e;
    }  
         e->data = dataNew;
        e->name= newName;
        e->average=average;
        
        e->next = NULL;
        
       ls->tail->next=e;
       ls->tail = e;

       ls->n=ls->n+1;
    
}
bool checkID(List *ls,int id){
    Element *tmp;
    tmp = ls->head;
    while (tmp!=NULL)
    {
        if (id==tmp->data)
        {
            return true;  
            break;          
        }
        tmp=tmp->next;
    }
    return false;
}
