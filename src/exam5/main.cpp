#include<iostream>
#include<string>

using namespace std;

class BookOrder
{
public:
    void BookInit(string ID,int number);
    void BookInfo();
    double price;
private:
    string bookID;
    int quantity;
};
void BookOrder::BookInit(string ID,int number)
{
    bookID = ID;
    quantity = number;
}
void BookOrder::BookInfo()
{
   cout<<"ͼ���ţ�"<<bookID<<endl;
   cout<<"������"<<quantity<<endl;
   cout<<"���ۣ�"<<price<<endl;
}
int main()
{
  class BookOrder use_bookorder;
  string str;
  int n;
  double count;
  cout<<"����ͼ����:";
  cin>>str;
  cout<<"���������͵���:";
  cin>>n>>use_bookorder.price;
  use_bookorder.BookInit(str,n);
  use_bookorder.BookInfo();
  cout<<"����ñ��ͼ���ۿ�(0-1֮��)��";
  cin>>count;
  use_bookorder.price =use_bookorder.price*count;
  use_bookorder.BookInit(str,n);
  cout<<"���۵�����"<<endl;
  use_bookorder.BookInfo();

  return 0;
}
