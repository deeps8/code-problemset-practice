#include<iostream>
using namespace std;

string addStrings(string num1, string num2) {
        int minlen = min(num1.length(),num2.length());
        int maxlen = num1.length()+num2.length() - minlen;
        string res = "";
        string carry = "0";
        for(int i=0;i<minlen;i++){
            int sum = (num1[num1.length()-i-1]-'0')+(num2[num2.length()-i-1]-'0') + (carry[0]-'0');
            cout<<sum<<" = "<<(num1[num1.length()-i-1]-'0')<<" + "<<(num2[num2.length()-i-1]-'0')<<endl;
            if( sum < 10){
                res.insert(0,to_string(sum));
            }
            else{
                res.insert(0,to_string(sum%10));
                carry = to_string(sum/10); 
            }
        }
        
        if(num1.length() > num2.length())
            res.insert(0,num1.substr(0,maxlen-minlen));
        else
            res.insert(0,num2.substr(0,maxlen-minlen));

        
        return res;
        
    }

int main(){
	
	string n1,n2;
	cin>>n1>>n2;
	
	cout<<addStrings(n1,n2);
	
	return 0;
}
