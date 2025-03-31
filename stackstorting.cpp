//Write to program to shorting to stack using another stack.
////
#include<iostream>
#include<stack>
using namespace std;

int main() {
    cout<<"Enter a size"<<endl;
    int n;
    cin >> n;
    cout<<"Enter the element"<<endl;
    stack<int> s;
    stack<int> t;
    int num;


    for(int i = 0; i < n; i++) {
        cin >> num;
        s.push(num);
    }


    while(s.size()!=0) {
        int temp = s.top();
        s.pop();

        while(t.size()!=0 && t.top() < temp) {
            s.push(t.top());
            t.pop();
        }

        t.push(temp);
    }


    while(!t.empty()) {
        cout << t.top() << " ";
        t.pop();
    }

    return 0;
}
