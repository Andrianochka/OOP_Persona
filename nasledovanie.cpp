#include <iostream>

using namespace std;

class transportne_sredstvo
{protected:
char* name;
char* virobnik;
int rik;
public:
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
}
};
class avto: public transportne_sredstvo
{ protected
char*  marka;
public:
avto(char* newname,char* newvirobnik,int newrik):transportne_sredstvo()
{marka=0;
}

transportne_sredstvo::(char* newname,char* newvirobnik,int newrik,char* marka):
transportne_sredstvo(char* newname,char* newvirobnik,int newrik)
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
}
{marka=newmarka;
}
int main()
{
cout « "transportne_sredstvo" « endl; 

return 0;
}
