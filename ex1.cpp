#include <iostream>
using namespace std;

struct Element{
    int data;
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
void changeToBegin(List *ls,int newData);
//create display list
void displayList(List *l);
//add to end list
void endOfList(List *ls,int dataNew);
int main(){
    List *l;
    l =createList();
    cout<<"\t\tFirst output:\n";
    changeToBegin(l,7);
    changeToBegin(l,1);
    cout<<"\t\t";
    displayList(l);
    cout<<"\t\tSecond output:\n";

    endOfList(l,0);
    endOfList(l,4);
    cout<<"\t\t";
    displayList(l);

}   
//create function to insert all number to begin
void changeToBegin(List *ls,int newData){
    Element *e;
    //create e is element
    e = new Element();
    //e data equal to parameter newdata
    e->data =newData;
    //e next is head of list

    e->next=ls->head;
    //connect list head to next element by pointer
    ls->head=e;
    if (ls->n==0)
    {//if ls have n==0 so tail of list equal to e which is next elelement
       ls->tail =e;
    }
    ls->n=ls->n+1;
    

}
//Display list
void displayList(List *l){
    Element *tmp;
    tmp =l->head;

    while (tmp!=NULL)//run to null 
    {
        //after display to data which store value 
        // it will go to next element to display next element
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

}
//add to end ofo  list
void endOfList(List *ls,int dataNew){
    Element *e;
     e=new Element();
    if (ls->n==0)
    {
        ls->head=e;
        ls->tail=e;
    }else
    {
        e->data = dataNew;//equal data
        e->next = NULL;//next of element set null

       ls->tail->next=e;//list tail go next until null
       ls->tail = e;//the way it run to tail of list so the value of end is tail of list
       ls->n=ls->n+1;

    }
   
}