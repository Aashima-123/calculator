#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter op: ";
    cin >> op;
    cout << "Enter second value: ";
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
