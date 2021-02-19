#ifndef ARRAY_H
#define ARRAY_H

const int ARRAYSIZE = 100;

class Array{
private:
	int *pArr_;
	int size_;
public:
	//Array();
	explicit Array(int size = ARRAYSIZE);
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	int& operator[] (int index);
	const int& operator[] (int index) const;
	
	int size() const;
};

#endif
