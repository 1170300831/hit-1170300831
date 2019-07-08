#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int x,n=0,guess;
    bool Y=false;

    x=rand()%100;
    cout<<"please guess the number:";
    while(n<9 && Y==false)
    {
        cin>>guess;
        n++;
        if(guess>x)
            cout<<"Too big: ";
        else if(guess<x)
            cout<<"Too small: ";
        else
        {
            Y=true;
            cout<<"You are right, the answer is "<<x<<" , you used "<<n<<" chances.";
            break;

        }

    }
     if(Y==false)
      {
          cin>>guess;
      if(guess!=x)
        cout<<"You are wrong, the answer is "<<x<<" , you used 10 chances.";
      else
        cout<<"You are right, the answer is "<<x<<" , you used "<<n+1<<" chances.";

      }
    return 0;
}
