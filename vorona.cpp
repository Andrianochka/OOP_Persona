
#include <string.h>

class vorona
{
    protected:
       char * name;
       char * rid;
       int vaga;
    public:
       vorona();
       vorona(char * newname, char * newrid, int newvaga);
};

vorona::vorona()
{
      name = new char[11];
      name[0]=0;
      rid = new char[11];
      rid[0]=0;
      vaga=0;
}

vorona::vorona(char * newname, char * newrid, int newvaga)
{
int n=strlen(newname);
name= new char[n+1];
strncpy(name, newname,n);
n=strlen(newrid);
rid= new char[n+1];
strncpy(rid, newrid,n);
vaga=newvaga;
}
