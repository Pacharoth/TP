#include <iostream>
using namespace std;
struct Eternal{
    char dat;
    Eternal *alnext;
};
struct Listo{
    int n;
    Eternal *head;
    Eternal *tail;
};
//create empty list
Listo *createListo();
//create function insert begin
void insert_Begin(Listo *ls,char anotherData);
//display all list
void displayListo(Listo *ls);
int main(){
    char i='Z';
    Listo *ls;
    ls= createListo();
    while (1)
    {
        if (i>='A'&&i<='Z')
        {
           insert_Begin(ls,i);
            
        }else
        {
            break;
        }
        i--;
        
    }displayListo(ls);
    
}
//create empty list
Listo *createListo(){
    Listo *ls;
    ls = new Listo();

    ls->n=0;
    ls->head=NULL;
    ls->tail=NULL;
    return ls;

}
//choose function insert begin
void insert_Begin(Listo *ls,char anotherData){
    Eternal *e;
    e = new Eternal();
    e->dat = anotherData;
    e->alnext = ls->head;
    ls->head = e;
    if (ls->n==0)
    {
        ls->tail=e;
    }
    ls->n=ls->n+1;
}
//display all list
void displayListo(Listo *ls){
    Eternal *tmp;
    tmp=ls->head;
    while (tmp!=NULL)
    {
        cout<<tmp->dat<<" ";
        tmp=tmp->alnext;
    }
    cout<<endl;

}