#include <iostream>
#include<string>

using namespace std;

class CharShape
{
public:
    CharShape(char ch);
    virtual void Show()= 0;
protected:
    char character;

};
CharShape::CharShape(char ch)
{
    character=ch;
}
class Triangle:public CharShape
{
public:
    Triangle(char ch,int r);
    virtual void Show();
private:
    int row;
};
Triangle::Triangle(char ch,int r):CharShape(ch),row(r)
{}
void Triangle::Show()
{
    int i,j;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=2*i-1; j++)
        {
            cout<<character;
        }
        cout<<endl;
    }
}
class Rectangle:public CharShape
{
public:
    Rectangle(char ch,int r,int c);
    virtual void Show();
private:
    int row;
    int col;
};
Rectangle::Rectangle(char ch,int r,int c):CharShape(ch),row(r),col(c)
{}
void Rectangle::Show()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<character;
        }
        cout<<endl;
    }
}
int main()
{
    char shape;
    int row,col;
    CharShape *ptr;
    cout<<"Please enter a character: ";
    cin>>shape;
    if(shape=='*')
    {
        cout<<"Please enter the number of rows: ";
        cin>>row;
        ptr = new Triangle(shape,row);
    }
    else if(shape=='#')
    {
        cout<<"Please enter the number of rows: ";
        cin>>row;
        cout<<"Please enter the number of cols: ";
        cin>>col;
        ptr = new Rectangle(shape,row,col);
    }
    else
    {
        cout<<"Invalid input"<<endl;
		cout<<"you are not clever"<<endl;
    }
    ptr->Show();
    delete ptr;

    return 0;
}
