#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
class transportne_sredstvo
{ protected:
            
   char* name;              // название
   char* virobnik;                  // визготовитель
   int rik;                           // год выпуска
   
   public:     
transportne_sredstvo ()    //конструктор без параметров
{ 
name = new char[7];
name[0]=0;
virobnik=new char[9];
virobnik[0]=0;
rik=0;
cout <<"konstructor bez parametriv" <<endl;
}
 };
class avto: public transportne_sredstvo
{ protected:
char*  marka;
public:
avto():transportne_sredstvo()
{marka=0;
}
transportne_sredstvo(char* newname,char* newvirobnik,int newrik)
{int n=strlen(newname);
 this->name=new char[n+1];
 strncpy(name, newname,n);
 name[n]=0;
n=strlen(newvirobnik);
 virobnik=new char[n+1];
 strncpy(virobnik, newvirobnik name,n);
 name[n]=0;
 rik=newrik;
avto( char* newname,char* newvirobnik,int newrik, char* newmark);
avto:avto( char* newname,char* newvirobnik,int newrik, char* newmark):transportne_sredstvo((char* newname,char* newvirobnik,int newrik)
{ marka=newmarka;
}

  protected
Persona(char* name,int age,int state)   // конструктор з параметрами

{ 
  int n=strlen(_name);
 this->name=new char[n+1];
 strncpy(name, _name,n);
 name[n]=0;
 
 int n =strlen(_age);
 this->virobnik=new char[n+1];
 strncpy(virobnik, _virobnik,n);
 virobnik[n]=0;
 this->rik=_rik
 }  
 void Persona::Show()
{ 
 cout << "name: " << name <<"virobnik: " <<virobnik << "rik: " << rik << endl;   
}
int main(int argc, char *argv[])
{
    system("PAUSE");
    return EXIT_SUCCESS;
}
