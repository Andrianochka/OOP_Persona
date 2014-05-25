#include <iostream>
#include <string.h>
using namespace std;


class Persona
{ protected:
            
   char* name;              // ���
   int age;                  // �������
   int state;                 // ���

public:     
Persona();                               //����������� ��� ����������
Persona(char* name,int age,int state);   // ����������� � �����������
Persona(const Persona&);                // ����������� ����������

~Persona();
char * Getname() ;
int Getage() ;
int Getstate() const;

void Setname(char*);
void Setage(int);
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
 cout <<" konstructor z parametrami"<< endl;
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
void Persona::setname(char*name)
{
if (name) delete[]name;
int n=strlen(_name);
name=new char[n+1];
strncpy(name,_name,n);
name[n]=0;
}

char*getname()
{
char*&=new char[strlen(name)+1];
strcpy(&,name,strlen(name));
&=[strlen(name)]=0;
return &;
}

void Persona::setage(_age)
{
age=_age;
}

getage()
{
// return age

return age;
}
 
void Persona::setstate(_state)
{
   state=_state;
}
 
getstate()
{
// return state

return state;
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
