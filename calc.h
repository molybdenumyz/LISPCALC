#ifndef CALC_H
#define CALC_H
#include<myqtstack.h>
#include<ctype.h>
#include<iostream>
QString operate(QString a,QString op,QString b)//运算
{   bool ok;
    int result;
    QString Qresult;
    int l=a.toInt(&ok,10);
    int r=b.toInt(&ok,10);
    ok =true;
    if(op == "+")
        result = l+r;
    else
    {
        if(op == "-")
            result =l-r;
        else if(op == "+")
            result = l+r;
        else if(op == "*")
            result =l*r;
        else if(op == "/")
        {if(r==0)
                ok = false;
            else
                result = r/l;
        }
        else
             result = r%l;
     }
    if(ok)
        Qresult =QString::number(result);
    else
        Qresult = 'N';
    return Qresult;
}

QString Operating(QString a)
{
    int i =0;

    QString th,q;//操作符
    QString d,b;//操作数
    QString str="表达式发生错误";
    QString result;//返回结果
    MYQTSTACK OPTR;//存放运算符
    MYQTSTACK OPND;//存放操作数
    while(!(a.at(i) == '='))
    {
        if('0'<=a.at(i)&&a.at(i)<='9')//如果字符为 数字 就进入 数字栈
        {
            OPND.push(a.at(i));
        }
        else//如果为操作符 就进入操作栈
        {
            if(a.at(i)=='(')
                OPTR.push(a.at(i));


                 else if(a.at(i)=='+')
                    OPTR.push(a.at(i));
                 else if(a.at(i)=='-')
                    OPTR.push(a.at(i));
                 else if(a.at(i)=='/')
                    OPTR.push(a.at(i));
                 else if(a.at(i)=='*')
                    OPTR.push(a.at(i));
                 else if(a.at(i)=='%')
                    OPTR.push(a.at(i));
                 else if(a.at(i)==')')
                {
                    OPTR.pop(th);
                    OPTR.pop(q);
                    if(OPND.base == OPND.top)
                    {
                        return str;
                    }
                    OPND.pop(d);//运算并得到对应结果
                    if(OPND.base == OPND.top)
                    {
                        return str;
                    }
                    OPND.pop(b);

                    result = operate(d,th,b);//运算并得到对应结果
                    if(result==str)
                        return str;
                    OPND.push(result);//结果入操作栈
                }

              else
                    return str;
            }

       i++;

    }
    OPND.getTop(result);//获取数字栈栈顶元素
    if(result == false)//拿不到结果，或者结果为N 就报错
        return str;
    if(result == "N")
        return str;
    return result;
}

#endif // CALC_H
