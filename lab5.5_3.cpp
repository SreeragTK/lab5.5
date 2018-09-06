//include library
#include <iostream>
using namespace std;
//declare main function
int main(){
           //define varibles
           int i,j;
           //apply conditions
           for(i=1;i<6;i++){
                           for(j=1;j<6;j++){
                                           if(i==1||i==5||j==1||j==5||i==2&&j==2||i==4&&j==2||i==3&&j==3||i==2&&j==4||i==4&&j==4)
                                           cout<<"*";
                                           else
                                           cout<<" ";
                                           }
           cout<<endl;}
//closing programme
return 0;
} 
