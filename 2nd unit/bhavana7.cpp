#include<iostream>
using namespace std;
class bankaccount{
    int accountnumber;
    float balance;
    public:
    bankaccount(){
        accountnumber = 0;
        balance=0;
     }
    bankaccount(int a,float b){
        accountnumber = a;                                  
        balance=b;                          
    }
    void display()
{
    cout<<"account:"<<accountnumber<<",balance:"<<balance<<endl;

}
};
int main()
{
  bankaccount b1;
  bankaccount b2;
    b1.display();
    b2.display();
    return 0;
}