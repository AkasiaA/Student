#include <iostream>
using namespace std;

#include "student.h"

int main(int argc,char **argv) {
     student Cst[10],*p;
     int i,c,a,m=(argc-1)/3;
     string n;
     float s;
     for(c=0,i=1;i<m;c++,i+=3){
         /*cout<<"What is your name?";
         cin>>n;
         cout<<"What is your age?";
         cin>>a;
         cout<<"What is your score?";
         cin>>s;*/
         Cst[i].set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
     }
  p=Cst;
    /*for(i=0;i<m;i++){

         (p+i)->print_all();
     }*/
}