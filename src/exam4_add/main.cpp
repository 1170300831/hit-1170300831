#include <iostream>
#include <string>

using namespace std;

//�����ַ���s�Ƿ��ǻ��ģ���������
bool is_pal(string s);

//��������punct�еı����Ŵ�s��ɾ��
//string s �ǿ��ܴ������ŵ�ԭʼӢ���ַ�����string punct �����б����Ź��ɵ��ַ���
//����û�б����ַ���
string remove_punct(string s,string punct);


//���ַ���sת��ΪСд��ʽ�������ַ���s��Сд��ʽ�����ַ���
string make_lower(string &s);

bool Test(string x);

int main()
{
    string str1,str2;

    cout<<"Enter a candidate for palindrome test:"<<endl;

    getline(cin,str1);//todo  ������ܴ��ո��Ӣ�ľ���str, str�ǿ�
    str2=str1;
    if(is_pal(str1)==true)
        cout<<"\""<<str2<<"\" is a palindrome.";
    else
        cout<<"\""<<str2<<"\" is not a palindrome.";

    return 0;
}
bool is_pal(string s)
{
    string punct(",;:.?!'\" ");  //��һ���ո�ı������ַ���

    remove_punct(s,punct);   //todo ����remove_punct()ɾ��s�еı�����
    make_lower(s);  //todo ����make_lower()��Сд��ʽ
    if(Test(s)==true)
        return true;
    else
        return false;
}
string remove_punct(string s, string punct)
{
    string no_punct; //û�б������ַ���
    int s_length = s.length();
    int len=punct.length();
    //todo

    for(int i =0 ; i<s_length-1; i++ )
    {
        for(int j=0; j<len-1; j++)
        {
            if(s[i]==punct[j])//todo ȡ��s���±�i��ʼ��һ���ַ����ɵ��Ӵ�a_char
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
