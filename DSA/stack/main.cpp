#include "charStack.h"
using namespace std;

void infixToPrefix(string s){
	string res;
	Stack *st = new Stack(s.length());
	
	for(int i=0;s[i];i++){
		char c = s[i];
		
		if(isalnum(c))
			res += c;
		else if(c=='(')
			st->push('(');
		else if(c==')'){
			while(st->topValue()!='('){
				res += st->topValue();
				st->pop();
			}
			st->pop();
		}
		else{
			while(!st->isEmpty() && (st->precedence(s[i]) <= st->precedence(st->topValue()))){
				res += st->topValue();
				st->pop();
			}
			st->push(c);
		}
		
	}
	// remaing exp
		while(!st->isEmpty()){
			res += st->topValue();
			st->pop();
		}
	
	cout<<res;
	
}

//void 

int main(){
	string s;
	cout<<"Enter the expression : ";
	cin>>s;
	
	infixToPrefix(s);
	
	return 0;
}
