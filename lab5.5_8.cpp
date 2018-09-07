//inlude libray
#include<iostream>
using namespace std;
//declare main function
int main(){
//declare variables
          int a,b;
          //applay conditions&displaying pattern
          for(a=1;a<6;++a){
                          for(b=1;b<6;b++){
                                           if(a+b<=a+2*b&&b<=a)
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                          cout<<"\n";}
//closing programme
return 0;
}

