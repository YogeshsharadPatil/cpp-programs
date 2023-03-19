#include<iostream>
using namespace std;
int main()
{
    //what is pointer----> data type which stores the address of a variable
    int a = 5;//var
    int* p = &a; //stores address of a

    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<p<<endl;
    cout<<"value at address p is  "<<*p<<endl;


    // Size of pinter
    cout<<"size of a: "<<sizeof(a)<<endl;
    cout<<"Size of p: "<<sizeof(p)<<endl;

    // pointer to pointer -->stores the address of ( e.g from above example) p
    int** ptr = &p; 
    cout<<"Address of p is "<< ptr<<endl;
    cout<<"Value at ptr is "<<**ptr<<endl;
    






} 