//
//  cat_dog.h
//  LLC1
//

#ifndef cat_dog_h
#define cat_dog_h


class cat:public NODE{
    int size;
    string name;
public:
   cat(string,int,int);
   ~cat();
    void show_node(){
        cout<<name<<" cries Meow Meow"<<endl;
        NODE::show_node();//Node data ID
    }

};

cat::cat(string n,int s,int d):NODE(d){
    name=n;
    size=s;
    cout<<"Cat size is "<<size<<endl;
}

cat::~cat(){
    cout<<"Cat "<<name<<" is gone"<<endl;
}

class dog:public NODE{
    float height;
public:
    dog(float,int);
    ~dog();
    
    void show_node(){
        cout<<"Hong Hong height "<<height<<endl;
        NODE::show_node();//Node data ID
    }

};

dog::dog(float s,int d):NODE(d){
    height = s;
    cout<<"Dog height is "<<height<<endl;
}

dog::~dog(){
    cout<<"Dog is gone"<<endl;
}

#endif