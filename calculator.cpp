#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "enter first value: ";
    cin >> a;
    cout << "enter op: ";
    cin >> op;
    cout << "enter second value: ";
    cin >> b;
    int result;

    if(op == '+'){
        cout << a + b;
    }else if(op == '-'){
        cout << a-b;
    }else if(op == '/'){
        cout << a/b;
    }else if(op == '*'){
        cout << a*b;
    }else{
        cout << "invalid operator";
    }

    return 0;
    


}
