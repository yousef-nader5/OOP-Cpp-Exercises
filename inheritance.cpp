#include <iostream>

using namespace std;
class projct{
private :
    string name ;
    int age ;

int sal ;
string job ;
public :
void var(string n, int a,int s ,string j )
{
    name=n;
    age=a;
    sal=s;
    job=j;
}
void print()

{
    cout<<"name is"<<name<<endl ;
    cout<<"age is"<<age<<endl;
    cout<<"sallry is"<<sal<<endl;
    cout<<"job is"<<job<<endl;

}




};

int main()
{
    projct yousef;
    yousef.var ("yoseef",20,10000,"devolper");
    yousef.print();
    return 0;
}
