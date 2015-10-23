

class Singleton {

public:
	static Singleton *getInstance();
	void destoryInstance();

	int doWork();

private:

	static Singleton *obj;

	bool isInstance;
	Singleton();
	Singleton(Singleton const &obj);
	Singleton& operator = (Singleton const &obj);

};