#include<iostream>
#include<fstream>
using namespace std;

class hospital
{
public :
void Heart_doctors3(){
cout<<"Doctor name : 1.Harshdeep Rana : fees 800 rs\n";
}
void Heart_doctors2(){
cout<<"Doctor name : 2.Kuldeep Singh : fees 1000 rs\n";
}
void Heart_doctors1(){
cout<<"Doctor name : 3.Kunal Wagle : fees 1500 rs\n";
}

void Eye_doctors3(){
cout<<"Doctor name : 1.Randeep Rana : fees 400 rs\n";
}
void Eye_doctors2(){
cout<<"Doctor name : 2.Ritik Kulkarni : fees 600 rs\n";
}
void Eye_doctors1(){
cout<<"Doctor name : 3.Sunil Kumar : fees 1000 rs\n";
}

void Brain_doctors3(){
cout<<"Doctor name : 1.Rohit Kumar : fees 5000 rs\n";
}
void Brain_doctors2(){
cout<<"Doctor name : 2.Riya Singh : fees 4500 rs\n";
}
void Brain_doctors1(){
cout<<"Doctor name : 3.Varsha Kanewal : fees 8000 rs\n";
}

void Lungs_doctors3(){
cout<<"Doctor name : 1.Shruti Gaikwad : fees 3000 rs\n";
}
void Lungs_doctors2(){
cout<<"Doctor name : 2.Kishor Gokul : fees 4000 rs\n";
}
void Lungs_doctors1(){
cout<<"Doctor name : 3.Gopika Tiwari : fees 5000 rs\n";
}
void Bone_doctors3(){
cout<<"Doctor name : 1.Minakshi Danvar : fees 4500 rs\n";
}
void Bone_doctors2(){
cout<<"Doctor name : 2.hitesh Kashph : fees 3400 rs\n";
}
void Bone_doctors1(){
cout<<"Doctor name : 3.Ankur Yadav : fees 5400 rs\n";
}
};

class fees : public hospital
{
int fee;
char ch;
public :
void heartd(){
    fstream file("heartdoctor.txt",ios::app|ios::in);
char cs_name[45];
cin>>ch;
switch(ch)
{
case '1': Heart_doctors3();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==800){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Harshdeep\n";
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Harshdeep";
          }
          else
          cout<<"Payment Error";
          break; 


case '2': Heart_doctors2();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==1000)
          {
            file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Kuldeep\n";
            cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Kuldeep";
          }
          else
          cout<<"Payment Error";
          break;    
            

case '3': Heart_doctors1();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==1500){
          file<<"Patient "<<cs_name<<" appointment fixed with Dr.Kunal\n";  
          cout<<"Patient "<<cs_name<<" appointment fixed with Dr.Kunal";
          }
          else
          cout<<"Payment Error";
          break;            
}
}

void eyed(){
 fstream file("eyedoctor.txt",ios::app|ios::in);    
char cs_name[45];
cin>>ch;
switch(ch)
{
case '1': Eye_doctors3();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==400){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Randeep\n";
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Randeep";
          }
          else
          cout<<"Payment Error";
          break; 


case '2': Eye_doctors2();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==600){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Ritik\n";
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Ritik";
          }
          else
          cout<<"Payment Error";
          break;    
            

case '3': Eye_doctors1();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==1000){
          file<<"Patient "<<cs_name<<" appointment fixed with Dr.Sunil\n";
          cout<<"Patient "<<cs_name<<" appointment fixed with Dr.Sunil";
          }
          else
          cout<<"Payment Error";
          break;            
}
}

void braind(){
 fstream file("braindoctor.txt",ios::app|ios::in);     
char cs_name[45];
cin>>ch;
switch(ch)
{
case '1': Brain_doctors3();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==5000){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Rohit\n";  
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Rohit";
          }
          else
          cout<<"Payment Error";
          break; 


case '2': Brain_doctors2();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==4500){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Riya\n";  
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Riya";
          }
          else
          cout<<"Payment Error";
          break;    
            

case '3': Brain_doctors1();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==8000){
          file<<"Patient "<<cs_name<<" appointment fixed with Dr.Varsha\n";  
          cout<<"Patient "<<cs_name<<" appointment fixed with Dr.Varsha";
          }
          else
          cout<<"Payment Error";
          break;            
}
}

void lungsd(){
fstream file("lungsdoctor.txt",ios::app|ios::in);     
char cs_name[45];
cin>>ch;
switch(ch)
{
case '1': Lungs_doctors3();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==8000){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Gopika\n";  
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Gopika";
          }
          else
          cout<<"Payment Error";
          break; 


case '2': Lungs_doctors2();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==4000){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Kishor\n";  
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Kishor";
          }
          else
          cout<<"Payment Error";
          break;    
            

case '3': Lungs_doctors1();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==3000){
          file<<"Patient "<<cs_name<<" appointment fixed with Dr.Shruti\n";
          cout<<"Patient "<<cs_name<<" appointment fixed with Dr.Shruti";
          }
          else
          cout<<"Payment Error";
          break;            
}
}

void boned(){
 fstream file("bonedoctor.txt",ios::app|ios::in);   
char cs_name[45];
cin>>ch;
switch(ch)
{
case '1': Bone_doctors3();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==5400){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Ankur\n";  
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Ankur";
          }
          else
          cout<<"Payment Error";
          break; 


case '2': Bone_doctors2();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==3400){
          file<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Hitesh\n";
          cout<<"Patient Name "<<cs_name<<" appointment fixed with Dr.Hitesh";
          }
          else
          cout<<"Payment Error";
          break;    
            

case '3': Bone_doctors1();
          cout<<"Enter your Name :: ";
          cin>>cs_name;
          cout<<"\nPay Fees :: ";
          cin>>fee;
          if(fee==4500){
          file<<"Patient "<<cs_name<<" appointment fixed with Dr.Minakshi\n";  
          cout<<"Patient "<<cs_name<<" appointment fixed with Dr.Minakshi";
          }
          else
          cout<<"Payment Error";
          break;            
}
}
};


class doctor : public fees
{
char ch;
public :
void select(){
cin>>ch;
switch(ch)
{
case '1': Heart_doctors3();
          Heart_doctors2();
          Heart_doctors1();
          cout<<"Choose doctor\n";
          heartd();
          break;


case '2': Eye_doctors3();
          Eye_doctors2();
          Eye_doctors1();
          cout<<"Choose doctor\n";
          eyed();
          break;                


case '3': Brain_doctors3();
          Brain_doctors2();
          Brain_doctors1();
          cout<<"Choose doctor\n";
          braind();
          break;
        

case '4': Lungs_doctors3();
          Lungs_doctors2();
          Lungs_doctors1();
          cout<<"Choose doctor\n";
          lungsd();
          break;
        

case '5': Bone_doctors3();
          Bone_doctors2();
          Bone_doctors1();
          cout<<"Choose doctor\n";
          boned();
          break;                    
}  
}
};


int main()
{
hospital h;
doctor d;
fees f;
cout<<"*****WELCOME TO CITY HOSPITAL*****";
cout<<"\n\n***********************************";
cout<<"\nEnter Problem :: \n1.Heart\n2.Eye\n3.brain\n4.Lungs\n5.Bones\n";
d.select();
return 0;
}