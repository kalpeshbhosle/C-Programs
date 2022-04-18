 //1. Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.
 #include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empid;
         char empname[20];
         int bsalary;
     public:
         Employee()
         {
             bsalary = 1000;
         }
         void GetData();
         void DispData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee id: ";
     cin>>empid;
     cout<<"Enter the employee name: ";
     cin>>empname;
 }
 void Employee::DispData()
 {
     cout<<endl<<empid<<"\t"<<empname<<"\t"<<bsalary<<"\t";
 }
 int main()
 {
     Employee e[3];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"EmpID \t Name \t Bsalary \t";
     for(int i=0; i<3;i++)
     {
         e[i].DispData();
     }
 }
