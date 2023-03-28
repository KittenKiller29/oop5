#include<iostream>
class Prototype {//родительский класс
public:
	/*Prototype();*///конструктор
	/*virtual ~Prototype();виртуальный деструктор*/
	void doSomething1() {//невиртуальный метод 1
		std::cout << "Prototype::doSomething1" << std::endl;
		doSomething3();
	}
	void doSomething2() {//невиртуальный метод 2
		std::cout << "Prototype::doSomething1" << std::endl;
		doSomething4();
	}
	void doSomething3() {//невиртуальный метод 3
		std::cout << "Prototype::doSomething2 non virtual" << std::endl;
	}
	virtual void doSomething4() {//виртуальный метод 4
		std::cout << "Prototype::doSomething2 virtual" << std::endl;
	}
	virtual std::string classname() {//метод возвращения имени класс объекта
		return "Prototype";
	}
	/*virtual bool IsA(std::string classname);*///метод для предварительной проверки при работе  с небезопасным приведением типов
};
class Daughter  : public Prototype {//Дочерний класс от класса-прототипа
public:
	
	void doSomething3() {//невиртуальный метод 3
		std::cout << "Daughter::doSomething2 non virtual" << std::endl;
	}
	void doSomething4() override{//виртуальный метод 4
		std::cout << "Daughter::doSomething2 virtual" << std::endl;
	}
};
int main() {
	Daughter testDaughter;
	std::cout << "Result of Daughter::doSomething1() and non virtual method2: " << std::endl;
	testDaughter.doSomething1();
	std::cout << std::endl;
	std::cout << "Result of Daughter::doSomething1() and virtual method2: " << std::endl;
	testDaughter.doSomething2();
	return 0;
}