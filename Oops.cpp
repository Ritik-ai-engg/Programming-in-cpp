#include<iostream>
#include<string>
using namespace std;    
 
class Teacher{     //class(blueprint)
private:
     double salary;
public:
//non -parameterized
    Teacher(){      //constructor always call in public not in private
      cout<<"Hi, i am non -parameterized constructor\n";
      dept="computer science\n";
    }
    //parameterized              //if we use multiple constructer then it is 
                                     //constructor overloading
    Teacher(string name,string dept,string subject, double salary){
        cout<<"Hi, i am parameterized  constructor\n";
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    //copy constructor
    Teacher(Teacher &orgObj){  //pass by reference
        cout<<"i am coustom copy constructor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    //properties/attributes
     string name;
     string dept;
     string subject;  
   
//methods/member function
    void changeDept(string newDept){
        dept=newDept;
    }//setter
    // void setSalary(int s){
    //     salary=s;
    // }//getter
    // double getSalary(){
    //     return salary;
    // }

void getInfo(){
    cout<<"name :"<< name <<endl;
    cout<<"subject : "<< subject <<endl;
   }
};
// /////class Student{
// public:
//     string name;
//     double* cgpaptr;  
// Student(string name, double cgpa){
//     this->name=name;
//     cgpaptr=new double;
//     *cgpaptr=cgpa;
// }                       ////////////////////////////////////
// Student(Student &obj){
//     this->name=obj.name;
//     cgpaptr=new double;  // this line for deep 
//     *cgpaptr=*obj.cgpaptr;
//    // this->cgpaptr=obj.cgpa;
// }
// // destruction
//  ~Student() {                       //destruction
//    cout<<"hi,I delete everything\n";
//    delete cgpaptr;   //<-this line for dynamically deallocation destruction
//  }

//   void getInfo(){
//     cout<<"name :"<< name <<endl;
//     cout<<"cgpa : "<< *cgpaptr <<endl;
//   }
////// };
class Person{    //inheritance 
public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    // Person(){
      cout<<"parent construction...\n";
    }
};
class Student : public Person {     //inheritance methode
public:
    int rollno;
    Student(string name, int age , int rollno) : Person(name, age){
        this->rollno=rollno;
        cout<<"child construction...\n";
    }

    void getInfo(){
        cout<<"name:"<< name <<endl;
        cout<<"age:"<< age <<endl;
        cout<<"roll Nu:"<< rollno <<endl;
    }
};
int main(){
    // Teacher t1;   // constructor call.....
    // Teacher t2;
    // t1.name="sanvi";
    // t1.subject="Oops";       comment due to parameterized constructor<=>
    // // t1.dept="AI&ML";
    // t1.setSalary(50000);  //use with the help of getter and setter
//    cout<<t1.dept<<endl;
//    cout<<t1.getSalary()<<endl;
// Teacher t1("sanvi","AIML","Oops",50000);  //parameterized constructor.....
// // t1.getInfo();
// Teacher t2(t1);  //coustom copy constructor-invoke.....
// t2.getInfo();
// Student s1("ritik rajput",9.5);
 //s1.getInfo();
// Student s2(s1);
// *(s2.cgpaptr)=9.7;
// s2.getInfo();
// s2.name="rohit";
// s2.getInfo();
    Student s1("ritik rajput",21,2448220);
    //  s1.name="ritik rajput";
    //  s1.age=21;
    //  s1.rollno=2448220;

     s1.getInfo();
    return 0; 
}