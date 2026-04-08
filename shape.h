class shape{
public:
	shape(int ,int=0);
	virtual double area()=0;
protected: int a,b;
};



class rectangle: public shape{
public:
	rectangle(int ,int);
	double area(){
		 return a*b;
	}
};
class circle:public shape{
public:
	circle(int);
	double area(){
       return 3.1415*a*a;
	}
};
