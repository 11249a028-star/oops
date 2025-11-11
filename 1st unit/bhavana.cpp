include<iostream>
using namespace std;
class laptop
public:
string processor;
string brand;
int ram;
void display()
{
    cout<<"brand;"<<brand
    <<",processor;"<<processor
    <<",RAM:"<<ram<<"GB"<<endl;
}
};
int main()
{
    laptop a,b;
    a.brand ="dell";
    a.processor ="intel i5";
    a.ram =8;
    b.brand ="hp";
    b.processor ="AMD ryzan 5";
    b.ram =16;
    a.display ();
    b.display();
    return 0;
}