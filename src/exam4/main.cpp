#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool Test(string s);

int main()
{
    string str1,str2;
    bool flag;
    cout<<"Enter a candidate for palindrome test:"<<endl;
    getline(cin,str1);
    str2=str1;
    for (string::size_type i=0; i!=str1.size(); i++)
        str1[i]=tolower(str1[i]);  //转换为小写

    str1.erase( remove_if ( str1.begin(), str1.end(), static_cast<int(*)(int)>(&ispunct) ), str1.end()); //去除标点符号
    str1.erase( remove_if ( str1.begin(), str1.end(), static_cast<int(*)(int)>(&isspace) ), str1.end()); //去除空格

    flag=Test(str1); //检测是否为回文
    if(flag==true)
        cout<<'"'<<str2<<'"'<<" is a palindrome."<<endl;
    else
        cout<<'"'<<str2<<'"'<<" is not a palindrome."<<endl;

    return 0;
}

bool Test(string x)
{
    bool flag;
    for (string::size_type j=0; j!=x.size(); j++)
    {
        if(x[j]==x[x.size()-j-1])
            flag=true;
        else
            flag=false;
    }
    return flag;
}
