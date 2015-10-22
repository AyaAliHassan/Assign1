class Move
{
private:
double x;
double y;
public:
Move::Move(double a = 0, double b = 0)
		 {x=a;
	       y=b;
	      }
	
showmove()
	{cout<<x;
     cout<<y;
      }
Move::add(const Move & m) 
{
	move(x+x.m,y+y.m);
}

Move::reset(double a = 0, double b = 0)
{ x=0;
y=0;
}
};

