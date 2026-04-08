
#include <iostream>
#include<cstdlib>
using namespace std;
#include"shape.h"


int main(int argc, char *argv[])
{  
  shape *A=new shape;

  A=new circle(5);
  cout<<A->area();
  delete A;
  
  A=new rectangle(3,2);
  cout<<A->area();
  delete A;
    
}
