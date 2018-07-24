#include<bits/stdc++.h>
using namespace std;

//program for transposition cipher

//class for encryption with transposition
class TranspositionEncryption {
        //code for encrypting the string
        public: 
        
        string encrypt(string s,char a[][10],int rail){
                int len=0;
                for(int i=0;len<s.length();i++)
                        for(int j=0;j<rail;j++)
                                if(len<s.length())
                                        a[j][i]=s[len++];

                cout<<"encrypted string -->  ";
                for(int i=0;i<10;i++)
                        for(int j=0;j<10;j++)
                                if(a[i][j]!='0')
                                        cout<<a[i][j];
                cout<<endl;                        

                cout<<"decrypted string -->  ";
                for(int i=0;i<10;i++)
                        for(int j=0;j<10;j++)
                                if(a[i][j]!='0')
                                        cout<<a[j][i];
                cout<<endl;                        
                
                }
        };
        

//main function

int main (){
        int rail;
        string s;
        char a[10][10]={0};
        cout<<"Enter the string -->  ";
        cin>>s;   
        cout<<"Enter no of rail -->  ";
        cin>>rail;                               //scanning the string  
        TranspositionEncryption e;
        e.encrypt(s,a,rail);
        return 0;
}

