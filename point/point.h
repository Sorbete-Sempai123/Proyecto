#ifndef point_h
#define point_h

class point{
public:
	point();
	point(point &o);
	point(int,int);
	void offset(int,int);
	void print();
private:
	double x,y;
};

#endif // point_h 