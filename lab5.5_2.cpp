//include library
#include<iostream>
using namespace std;
//declaring main function
int main(){
          //defining variables
          int i,j;
          //aplaying conditions
          for(i=1;i<6;++i){
                          for(j=1;j<6;++j){
                          //displaying programme
                          if(i==1 || i==5||j==1||j==5)
                             cout<<"*";
                          else
                          cout<<" ";}
                          cout<<"\n";}
return 0;
} 
