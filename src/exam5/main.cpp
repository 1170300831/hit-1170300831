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
   cout<<"图书编号："<<bookID<<endl;
   cout<<"数量："<<quantity<<endl;
   cout<<"单价："<<price<<endl;
}
int main()
{
  class BookOrder use_bookorder;
  string str;
  int n;
  double count;
  cout<<"输入图书编号:";
  cin>>str;
  cout<<"输入数量和单价:";
  cin>>n>>use_bookorder.price;
  use_bookorder.BookInit(str,n);
  use_bookorder.BookInfo();
  cout<<"输入该编号图书折扣(0-1之间)：";
  cin>>count;
  use_bookorder.price =use_bookorder.price*count;
  use_bookorder.BookInit(str,n);
  cout<<"单价调整后："<<endl;
  use_bookorder.BookInfo();

  return 0;
}
