#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
int menu(); // Finish your menu to choose cat or dog.
int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

 while ((i = menu()) != 3) {
        if (i == 1) {
            string name;
            int size;
            int ID;
            cout << "Cat name: ";
            cin >>name;
            cout <<"Cat size: ";
            cin >> size;
            cout << "ID: " ;
            cin >>ID ;
            t = new cat(name,size,ID); 
            A.add_node(t);
        } 
        else if (i == 2) {
            float h;
            int ID;
            cout << "Dog height: ";
            cin >> h;
            cout << "ID: ";
            cin >>ID;
            t = new dog(h,ID);
            A.add_node(t);
        }
        else {
            cout << "Invalid choice, try again." << endl;
        }
    }
   
   A.show_all();


    
}

int menu(){
  cout << "Are you a cat or a dog?" << endl;
  cout << "Type 1 for Cat" << endl;
  cout << "Type 2 for Dog" << endl;
  cout << "Type 3 for Quit" << endl;
  int ans;
  cin>>ans;
  return ans;
}