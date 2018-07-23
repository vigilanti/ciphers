#include<bits/stdc++.h>
using namespace std;

//program for transposition cipher

//function for encryption with transposition
class TranspositionEncryption {
        //code for encrypting the string
        public: 
        string encrypt(string s){
                string ency=s;
                int mid=s.length()/2;
                for(int i=0,j=0;i<s.length();i++){
                        if(i%2==0)
                            ency[j++]=s[i];
                        if(i%2==1)
                            ency[mid++]=s[i];
                }       
                return ency;
        }
        
        //code for decrypting the cipher
        string decryption(string s){
                string decrypt=s;
                int mid=s.length()/2;
                for(int i=0,j=0;i<s.length();i++){
                        if(i%2==0)
                            decrypt[i]=s[j++];
                        if(i%2==1)
                            decrypt[i]=s[mid++];
                }       
                return decrypt;
        }
};

//main function

int main (){
        string s,ency,decy;
        cout<<"Enter the string -->  ";
        cin>>s;      	                                 //scanning the string  
        TranspositionEncryption e;
        ency=e.encrypt(s);
        decy=e.decryption(ency);
        cout<<"String is --> "<<ency<<endl;
        cout<<"String is --> "<<decy<<endl;
        return 0;
}

