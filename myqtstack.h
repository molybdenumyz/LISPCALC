#ifndef MYQTSTACK_H
#define MYQTSTACK_H
#include <Qstring>
class MYQTSTACK
{
    public :QString str[100];
            int base;
            int top;
            int size;
            int push(QString e);
            int pop(QString &e);
            int getTop(QString &e);
            MYQTSTACK();

};
MYQTSTACK::MYQTSTACK()
{
   this->base=0;
   this->top=0;
   this->size=0;
}
int MYQTSTACK::push(QString e)
{
    this->str[top++] = e;
    (this->size)++;
    return true;
}

int MYQTSTACK::pop(QString &e)
{
    if(this->top == this->base)
        return false;
    e = this->str[top-1];
    this->size--;
    this->top--;
    return true;
}

int MYQTSTACK::getTop(QString &e)
{
    if(this->top != this->base)
        e = this->str[top-1];
    return false;
}

#endif // MYQTSTACK_H
