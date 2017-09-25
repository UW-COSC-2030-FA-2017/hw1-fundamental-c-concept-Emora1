#ifndef Collection.h
#define Collection.h
template <class T>

class Collection 
{
public:
	Collection()
{
	collection = new T[256];
	
	for (int i = 0; i < 256 ; i++)
	{
		collection[i] = NULL ;

	}

}
		bool isEmpty() const;
		void makeEmpty();
		void insert(T val);
		void remove(T val);
		void notContained(T val) const;

private:
	int length = 0;
	T * collection;
};


#endif // !Collection.h