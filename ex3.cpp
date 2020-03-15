#include <iostream>
#include<stdbool.h>
using namespace std;
struct element{
   int data;
   element *next;

};
struct List{
    int n=0;
    element *head;
    element *tail;

};
//create empty list
List *ariListo();
//insert to begin
void beginBattle(List *pls,int dataRom);
//create display function
void displayList(List *ls);
//create endlist
void endList(List *ls,int data1);
//create checking
bool checkInList(List *ls,int num);
int main(){
    List *ls;
    ls=ariListo();
    int choice,num;
    while (1)
    {
        cout<<"\t\t===============================\n";
        cout<<"\t\t+Welcome to New Linked List-_-+\n";
        cout<<"\t\t===============================\n\n";
        cout<<"1.Add a number to begin of list.\n\n";
        cout<<"2.Display all data in list.\n\n";
        cout<<"3.Add a number end of the list.\n\n";
        cout<<"4.Check wether the list contain a number.\n\n";
        cout<<"5.Exit program.\n\n";
        cout<<"Choice:";
        cin>>choice;
        if (choice==1)
        {
            cout<<"Input Number:";
            cin>>num;
            beginBattle(ls,num);
        }else if (choice==2)
        {
            displayList(ls);
        }else if (choice==3)
        {
            cout<<"Input Number:";
            cin>>num;
            endList(ls,num);
        }else if (choice==4)
        {
            cout<<"Input Number to check in list:";
            cin>>num;
            if (!checkInList(ls,num))
            {
                cout<<num<<" not exist in list!\n\n";
            }else
            {
                cout<<num<<" contain in list!\n\n";
            }
        }else if (choice ==5)
        {
            cout<<"Bruh!Exit program.\n";
            break;
        }
    }
}
List *ariListo(){

    List *pls;
    pls = new List();
    pls->n=0;
    pls->head=NULL;
    pls->tail=NULL;
    return pls;
}


void beginBattle(List *pls,int dataRom){
    element *e;
    e= new element();
    e->data = dataRom;
    e->next = pls->head;
    pls->head = e;
    if (pls->n==0)
    {
        pls->tail=e;
    }
    pls->n=pls->n+1;
}
void displayList(List *ls){
    element *tmp;
    tmp = ls->head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void endList(List *ls,int data1){
    element *e;
    if (ls->n==0)
    {
        beginBattle(ls,data1);

    }else
    {
        e = new element();
        e->data = data1;
        e->next=NULL;

        ls->tail->next=e;
        ls->tail=e;
        ls->n=ls->n+1;
    }
}
bool checkInList(List *ls,int num){
    element *tmp;
    tmp=ls->head;
    while (tmp!=NULL)
    {
        if (num==tmp->data)
        {   
            
            return true;
              break;
        }
        tmp=tmp->next;
        ls->n++;    
    }
    return false;
}
 

