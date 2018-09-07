//include library
#include<iostream>
using namespace std;
//declare main function
int main(){
          //declare variables
          int a,b;
          //applay conditions and displaying pattern
          for(a=1;a<6;a++){
                          for(b=1;b<10;++b){
                                           if((a+b)==6||(a+b)==10||(a==1&&b>4)||(a==5&&b<6))
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                                           cout<<endl;}
//closing programme
return 0;
}

                          
          
