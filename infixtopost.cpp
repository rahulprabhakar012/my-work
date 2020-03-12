#include<iostream>
#include<stack>
//#include<stdlib>
#include<string>
using namespace std;
stack <char> s;
bool isoperand(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/')
	return false;
	else
	return true;
}
int pre(char x){
	if(x=='+'||x=='-')
	return 1;
	else if(x=='/'||x=='*')
	return 2;
	else 
	return 0;
}
string post(string g){
	string t;
	int i=0;
		s.push('#');
	while(g[i]!='\0'){
	if(isoperand(g[i]))
	t.push_back(g[i++]);
	else{
	 if(pre(g[i])>pre(s.top()))	
		s.push(g[i++]);
		else{
				t.push_back(s.top());
				s.pop();
		}
	}
	//i++;
	}
		while(!s.empty())
		{
			t.push_back(s.top());
			s.pop();
		}
		return t;	
}
int main(){
	string t1,t2;
	cout<<"enter an expression\n";
	getline(cin,t1);
	cout<<"postfix\n";
	t2=post(t1);
//	t2.pop_back();
	cout<<t2;
	return 0;
	
}
