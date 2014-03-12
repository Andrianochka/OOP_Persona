#include <iostream.h>
#include <string.h>
using namespace std;



class Persona
{
char name;              // имя
int age;                  // возраст
int state;                 // пол

public:     
Persona();                               // конструктор без параметров
Persona(char*,int,int);         // конструктор с параметрами
Persona(const Persona&); // конструктор копирования

~Persona();
char * GetName() ;
int GetAge() const;
int GetState() const;

void SetName(char*);
void SetAge(int);
void SetState(int);
void Set(char*,int,int);
void Show(); 
}
Persona::Persona()
{ 

name = new char[20];
name[0]=0;
age=0;
state=0;
cout<<"constructor bez parametriv"<< endl;
}
  
 void persona::show();
{
cout<<"("«name«","«age«","«state«")"
}
Persona::Persona(char*_name, int_sge, int_state);
 { 
 int n=strlen(new_name);
 this->name=new char[n+1];
 strlen cpy(name, new_name,n);
  this->age=new_age[n+1];
 strlen cpy(age, new_age,n);
 this->state=new_state[n+1];
 strlen cpy(state, new_state,n);
 }  
   void Persona::show_Persona(void)
{ 
 cout « "name: " « name « endl;
 cin » name;
 cout « "age: " « age « endl; 
 cin » age;
 cout « "state: " « state « endl; 
 cin » state; 
}
cout <<"konstrucror z parametrami"<<endl;
 }
  
int main(int argc, char *argv[])
{ Persona p1;
  p1.show();
  Persona p2;
  p2.show();
  void Persona();
    system("PAUSE");
    return p1;
}
