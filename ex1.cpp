#include <iostream>
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
    ls->n=ls->n+1;//erach that algorithm repeat and store as singled link step by step

}


int main(){
    
}