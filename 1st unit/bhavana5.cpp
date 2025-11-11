# include<iostream>
using namespace std;
class employee {
    public:
    int empid ;
    string name;
    float salary;
    void setemployee {
        empid =id;
        name =n;
        salary =s;
    }
    void displayemployee ();
};
void employee :: displayemployee () {
    cout<<"employee id :"<<empid
         <<",name:"<<name
         <<",salary:rs"<<salary<<endl;
}
int main () {
    employee e1,e2;
    e1.set employee(101,"ravi,50000.75");
    e2.set employe(102,"priya,62000.50");
        e1.display employee();
        e2.display employee();
        return 0;
}   

