#ifndef EMPTY_H
#define EMPTY_H

class Empty{
private:
	
public:
	//Empty();		//mad by c++ compiler
	//Empty(const Empty& rhs) {/* member copy ! */}
	//~Empty();
	
	//Empt& operator=(const Empty& rhs) {/* member copy! */}
	
	//Empty& operator&() {return this;}
	//const Empty& operator&() const {return this;}
	
	Empty() { }
	Empty(const Empty& rhs) { }
	~Empty()
	
	Empty& operator=(const Empty& rhs) { }
	
	Empty* operator&() { return this }
	
	const Empty* operator&() const { return this }
	
};

#endif
