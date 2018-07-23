#include<bits/stdc++.h>
using namespace std;

//program for transposition cipher

int main (){
        string s;
        cout<<"Enter the string -->  ";
        cin>>s;
        for(int i=0,n=0;i<s.length();i++){
                if((n++)%2==0){
                        
                
                }
                int val=s[i];
                val=val+3;
                s[i]=char(val);
                
                
                                
        }
        
        cout<<"String is --> "<<s;
        return 0;
}
