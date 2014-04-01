#include <iostream>
#include <string.h>
using namespace std;


class Persona
{ protected:
            
   char* name;              // имя
   int age;                  // возраст
   int state;                 // пол

public:     
Persona();                               //конструктор без параметров
Persona(char* name,int age,int state);   // конструктор з параметрами
Persona(const Persona&);                // конструктор копыювання

~Persona();
char * Get name() ;
int Get age() ;
int Getstate() const;

void Set name(char*);
void Set age(int);
void Setstate(int);
void Set(char*,int,int);
void Show(); 
};
Persona::Persona()
{ 
name = new char[20];
name[0]=0;
age=0;
state=0;
cout <<"konstructor bez parametriv" <<endl;
}
 void Persona::Show()
{ 
 cout << "name: " << name <<"age: " << age << "state: " << state << endl; 
} 

Persona::Persona(char* _name, int _age, int _state)
 { 
  int n=strlen(_name);
 this->name=new char[n+1];
 strncpy(name, _name,n);
 name[n]=0;
 
 this->age=_age;
 this->state=_state;
 }  
 void Persona::Show()
{ 
 cout << "name: " << name <<"age: " << age << "state: " << state << endl;   
}
Persona::Persona(const Persona &x)
{
int n=strlen(x.name);
this->name=new char[n+1];
strncpy(name,x.name,n);
name[n]=0;
this->age=x.age;

this->state=x.state;
}
void Persona::Set name(char*_name)
{
if (name) delete[]name;
int n=strlen(_name);
this->name=new char[n+1];
strncpy(name,_name,n);
name[n]=0;
}

char*get name()
{
char*&=new char[strlen(name)+1];
strcpy(&,name,strlen(name));
&=[strlen(name)]=0;
return &;
}

void Persona::set age(char*age)
{
if (age) delete[]age;
int n=strlen(_age);
age=new char[n+1];
strncpy(age,_age,n);
age[n]=0;
}

char*get age()
{
// return age
char*&=new char[strlen(age)+1];
strcpy(&,age,strlen(age));
&=[strlen(age)]=0;
return &;
}
 
void Persona::set state(char*state)
{
if (state) delete[]sate;
int n=strlen(_state);
state=new char[n+1];
strncpy(state,_state,n);
state[n]=0;
}
 
char*get state()
{
// return state
char*&=new char[strlen(state)+1];
strcpy(&,state,strlen(state));
&=[strlen(state)]=0;
return &;
}





int main()
{
  Persona p1;
  p1.show();
  Persona p2("olya",4,1);
  p2.show();
  
persona*p=new persona;
persona(vova,12,1);
p->show();
    system("PAUSE");
  return EXIT_SUCCESS;;
}
