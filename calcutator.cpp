#include<iostream>
using namespace std;

float add();
float add()
{
    float num1,num2,res;
    cout << "enter num1\n ";
    cin >> num1;
    cout << "enter num2\n ";
    cin >> num2;
    res = num1+num2;
    cout << "res\n " << res <<endl;
    return 0;
}
float subtraction();
float subtraction()
{
     float num1,num2,res;
    cout << "enter num1\n ";
    cin >> num1;
    cout << "enter num2\n ";
    cin >> num2;
    res = num1-num2;
    cout << "res\n " << res <<endl;
    return 0;
}
float multiply();
float multiply()
{
     float num1,num2,res;
    cout << "enter num1\n ";
    cin >> num1;
    cout << "enter num2\n ";
    cin >> num2;
    res = num1*num2;
    cout << "res\n " << res <<endl;
    return 0;
}
float divide();
float divide()
{
     float num1,num2,res;
    cout << "enter num1\n ";
    cin >> num1;
    cout << "enter num2\n ";
    cin >> num2;
    res = num1/num2;
    cout << "res\n " << res <<endl;
    return 0;
}
int main()
{
    int x,r=0;
    while(r<=10)
    {
    cout << "\n1.+ = 1 ";
    cout << "\n2.- = 2 ";
    cout << "\n3.* = 3 ";
    cout << "\n4./ = 4 ";
    cout << "\nenter the operation\n ";
    cin >> x;
    if(x==1)
    {
        add();
    }
    else if (x==2)
    {
        subtraction();
    }
    else if (x==3)
    {
        multiply();
    }
    else if (x==4)
    {
        divide();
    }
    else if (x>=4)
    {
        cout << "\nwrong choice\n"<<endl;
    }
    r++;
}
    getchar();
    return 0;
}