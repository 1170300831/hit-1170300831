#include <iostream>
#include <string>

using namespace std;

//测试字符串s是否是回文，返回真或假
bool is_pal(string s);

//将出现在punct中的标点符号从s中删除
//string s 是可能带标点符号的原始英文字符串，string punct 是所有标点符号构成的字符串
//返回没有标点的字符串
string remove_punct(string s,string punct);


//将字符串s转换为小写形式，返回字符串s的小写形式的新字符串
string make_lower(string &s);

bool Test(string x);

int main()
{
    string str1,str2;

    cout<<"Enter a candidate for palindrome test:"<<endl;

    getline(cin,str1);//todo  读入可能带空格的英文句子str, str非空
    str2=str1;
    if(is_pal(str1)==true)
        cout<<"\""<<str2<<"\" is a palindrome.";
    else
        cout<<"\""<<str2<<"\" is not a palindrome.";

    return 0;
}
bool is_pal(string s)
{
    string punct(",;:.?!'\" ");  //有一个空格的标点符号字符串

    remove_punct(s,punct);   //todo 调用remove_punct()删除s中的标点符号
    make_lower(s);  //todo 调用make_lower()求小写形式
    if(Test(s)==true)
        return true;
    else
        return false;
}
string remove_punct(string s, string punct)
{
    string no_punct; //没有标点的新字符串
    int s_length = s.length();
    int len=punct.length();
    //todo

    for(int i =0 ; i<s_length-1; i++ )
    {
        for(int j=0; j<len-1; j++)
        {
            if(s[i]==punct[j])//todo 取出s中下标i开始的一个字符构成的子串a_char
                s[i+1]=s[i];
        }
    }

    no_punct=s;

    return no_punct;
}

string make_lower( string &s)
{
    string lower_str(s);
    for (string::size_type j=0; j!=s.size(); j++)
    {
        if(s[j]>=65&&s[j]<=90)
            s[j]+=32;
    }
    lower_str=s;

    return lower_str;
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
