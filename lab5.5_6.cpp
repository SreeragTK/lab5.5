//inlude libray
#include<iostream>
using namespace std;
//declare main function
int main(){
//declare variables
          int a,b,c=a+5;
          //applay conditions&displaying pattern
          for(a=1;a<6;++a){
                          for(b=1;b<10;b++){
                                           if(b>=a&&a+b<(5+2*a))
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                          cout<<"\n";}
//closing programme
return 0;
}

