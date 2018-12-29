#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string s;
int priority[300];
stack<char> op;
stack<int> num;

void do_operation(){
	char cur_op = op.top();
	op.pop();

	int x = num.top();
    num.pop();
	int y = num.top();
    num.pop();
	int res = 0;

	switch (cur_op){
		case '+' : res = x + y; break;
		case '-' : res = y - x; break;
		case '*' : res = x * y; break;
	}

	num.push(res);

}


int main(){

	priority['('] = 0;
	priority['+'] = 1;
	priority['-'] = 1;
	priority['*'] = 2;

	cin>>s;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '+' || s[i] == '-' || s[i] == '*'){
			while(!op.empty() && priority[op.top()] >= priority[s[i]]){
				do_operation();
			}
			op.push(s[i]);                
		}	
		else if (s[i] == '('){
			op.push(s[i]);
		}
		else if (s[i] == ')'){
			while (op.top() != '('){
				do_operation();
			}
			op.pop();
		}
		else{
			int number = s[i] - '0';
			num.push(number); 
		}					 
	}

	while(!op.empty()){
		do_operation();
	}

	cout<<num.top();
}