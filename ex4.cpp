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
//createlist
List *createList(){
    List *ls;
    ls = new List();
    ls->n=0;
    ls->head=NULL;
    ls->tail =NULL;
    return ls;
}
//create begin
void endList(List *ls,int data1){
    Element *e;
    e = new Element();
    if (ls->n==0)
    {
      ls->head=e;
      ls->tail=e;

    }
    
        
        e->data = data1;
        e->next=NULL;

        ls->tail->next=e;
        ls->tail=e;
       ls->n=ls->n+1;
    
}
void displayList1(List *ls){
    Element *tmp;
    tmp = ls->head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;    
    }
    cout<<endl;
}
int main(){
    int ele,num;
    List *ls;
    ls = createList();
    cout<<"Enter element:";
    cin>>ele;
    for (int i = 1; i <=ele ; i++)
    {
        cout<<"Input number["<<i<<"]:";
        cin>>num;
       endList(ls,num);
        
    }
    cout<<"\t\tThe result\n\n";
    displayList1(ls);

}