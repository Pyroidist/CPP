#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
int i,y,ans;
        string fil;
        string s="A man, a plan, a canal: Panama";
        for(char c : s){
            if(65<=c && c<=90){
                c=c+32;
            }
            if(isalnum(c)){
                
                fil=fil + c++;
                
            }
        } 
        
        y = fil.length();
        for(i=0;i<y/2;i++){
            if(fil[i]!=fil[y-1-i]){
                ans=0;
                break;
                
            }else{
                ans=1;
            }
        }cout<<fil;
     if(ans==1 || fil.length()==1){
        cout<< "true";}
else 
    cout<< "false";
     }  
    
