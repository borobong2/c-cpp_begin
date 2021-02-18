#ifndef STRING_H
#define STRING_H

class String;


class String{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
	char *str;
	int len;
	
	void set_str(const char *str);
	
public:
	//String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	const char *c_str() const;
	int length() const;
	
	String& operator=(const String& rhs);
	String& operator=(const char *str);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
//	String& operator=(const String& rhs) { }
//	String* operator& { return this; }
//	Const String* operator& const { return this; }

};

#endif
