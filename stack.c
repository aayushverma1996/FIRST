#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int ary[10];
    int top;
};
void push(struct stack *st,int item);
void pop(struct stack *st);
void view(struct stack st);

void push(struct stack *st,int item)
{
    if(st->top==9)
    {
        printf("stack is full\n");
        return;
    }
    st->ary[++st->top]=item;
}
void pop(struct stack *st)
{
    if(st->top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    st->top--;
}
void view(struct stack st)
{
    int i=st.top;
    if(st.top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    while(i>=0)
    printf("%d\n ",st.ary[i--]);
    
}
void main()
{
struct stack s;
int res,item;
s.top=-1;
while(1)
{
printf("-------------Welcome to stack implementation-------------------\n");
printf("1.Push\n2.pop\n3.view stack\n4.exit");
scanf("%d",&res);
switch(res)
{
case 1:printf("Enter the item to be pushed into the stack");
        scanf("%d",&item);   
        push(&s,item);
        printf("Your item is successfully pushed");
        break;
case 2:pop(&s);
    printf("Your current top item is popped successfully");
    break;
case 3:view(s);
        break;
case 4: exit(0);
default: printf("Your response is invalid.......Try again");



}
}
}