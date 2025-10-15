// test class to illustrate constructors and destructors

class Thing
{
public:
   Thing();		// default constructor
   Thing(int x);	// constructor with parameter
   ~Thing();		// destructor

private:
   int data;		// private data item
};