#include <iostream>
#include <algorithm>
#include<string>
#include<stack>
using namespace std;
string s1;
stack <string> stk;
string jodo(string s2){
    stk.push(s2);
    s1.append(s2);
    cout<<s1;
    return s1;
}
string del(int k){
    string a;
    int l=s1.length();
    a=s1.substr(((l-k)+1),l);
    s1.erase((l-k));
    stk.push(a);
    cout<<s1;
    return s1;
}
void print(int r){
    cout<<s1[r-1]<<"\n";
}

int main() {
    int op,last=0,opre,key;
    string temp,t1;
    cout<<"no\n";
    cin>>op;
    while(op!=0){
    	cout<<"konsa\n";
        cin>>opre;
        switch (opre) {
        case 1:cout<<"string\n";
				cin>>temp;
                s1=jodo(temp);
                last=0;
                break;
        case 2:cout<<"key\n";
				cin>>key;
                s1=del(key);
                last=1;
                break;
        case 3: cout<<"key\n";
				cin>>key;
                print(key);
                break;
        case 4:if(last==0){
            t1=stk.top();
            s1=del(t1.length());
            stk.pop();
            }
            else{
                t1=stk.top();
                s1=jodo(t1);
                stk.pop();
            }
        default :break;            
        }
        op--;
    }
    return 0;
}

