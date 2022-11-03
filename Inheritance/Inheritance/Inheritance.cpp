#include <iostream>
using namespace std;

// Single
// MultiLevel
// Multiple
// Hierarchy

// her birine uygun real heyatdan numuneler yazin


// Task.1 Single Inheritance - Bir Derived class yalniz bir Base class-dan torenir.

class Planets {
public:
	Planets() {
		cout << "This is a planet." << endl;
	}
};

class Mars : public Planets {

};

void main() {
	Mars mars;
}





class A {
protected:
	int a;

public:
	void Set_A(int a) {
		this->a = a;
	}

	void Show_A() {
		cout << "Value of A: " << a << endl;
	}

};


class B : public A {
	int b, s;

public:
	void Set_B(int a, int b) {
		Set_A(a);
		this->b = b;
	}

	void Show_B() {
		Show_A();
		cout << "Value of B: " << b << endl;
	}

	void Summ() {
		s = a + b;
		cout << "a + b = " << s << endl;
	}
};


void main() {
	B b;
	b.Set_B(4, 2);
	b.Show_B();
	b.Summ();
}







// Task.2 MultiLevel Inheritance - Derived class bashqa torenmish class-dan torenir, yeni bir Base class-dan ilk once bir class torenir ve hemin torenmish class-dan yeni class torenir.



class HomoHabilis {
public:
	HomoHabilis() {
		cout << "This is human." << endl;
	}
};

class HomoErectus : public HomoHabilis {
public:
	HomoErectus() {
		cout << "This is standing human." << endl;
	}
};

class HomoSapiens : public HomoErectus {
public:
	HomoSapiens() {
		cout << "This is intelligent human." << endl;
	}
};

void main() {
	HomoSapiens hs;
}







// Task.3 Multiple Inheritance - Bir Derived class-in birden chox Base class-i var.

class Alive {
public:
	Alive() {
		cout << "This is alive." << endl;
	}
};

class Autotroph {
public:
	Autotroph() {
		cout << "This is autotroph." << endl;
	}
};


class Seaweeds : public Alive, public Autotroph {

};

void main() {
	Seaweeds sw;
}








// Task.4 Hierarchy Inheritance - Bir Base class-dan birden chox Derived class torenir.


class Alive {
public:
	Alive() {
		cout << "This is Alive." << endl;
	}
};

class Animals : public Alive {

};

class Plants : public Alive {

};



void main() {
	Animals a;
	Plants p;
}