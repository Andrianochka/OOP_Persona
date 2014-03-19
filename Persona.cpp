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
char * GetName() ;
int GetAge() const;
int GetState() const;

void SetName(char*);
void SetAge(int);
void SetState(int);
void Set(char*,int,int);
void Show(); 
};
Persona::Persona()
{ 
name = new char[20];
name[0]=0;
age=0;
state=0;
};
  

Persona::Persona(char* _name, int _age, int _state)
 { 
  int n=strlen(_name);
 this->name=new char[n+1];
 strncpy(name, _name,n);
 this->age=_age;
 this->state=_state;
 }  
   void Persona::Show()
{ 
 cout << "name: " << name <<"age: " << age << "state: " << state << endl; 

}
  
int main(int argc, char *argv[])
{ Persona p1;
  p1.show();
  Persona p2(olya,4,1);
  p2.show();
  void Persona();
    system("PAUSE");
    return p2;
}
