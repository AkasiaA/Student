#ifndef student_h
#define student_h
#include <iostream>
using namespace std;

class student{
   private: string name;
            int age;
            float score;
   public: 
        void set_name(string);
		    void print_name();
        void set_age(int);
        int get_age();
        void set_float(float s){s>100?score=100:score=s;  }
        float get_float(){ return score;}
        void print_all(); 
        void set_all(string,int,float);
};

void student::print_all(){

 		cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<" Score: "<<score <<endl;
}

void student::set_all(string n,int a,float s){
  name = n;
  age = a;
  score = s;
}

int student::get_age(){ return age;}

void student::set_age(int n){ age=n;}
#endif