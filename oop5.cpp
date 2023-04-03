#include<iostream>
class Base {//родительский класс
public:
	Base() {

	}
	Base(Base* obj) {

	}
	Base(Base& obj) {

	}
	~Base() {

	}
	void doSomething1() {//невиртуальный метод 1
		std::cout << "Base::doSomething1" << std::endl;
		doSomething3();
	}
	void doSomething2() {//невиртуальный метод 2
		std::cout << "Base::doSomething1" << std::endl;
		doSomething4();
	}
	void doSomething3() {//невиртуальный метод 3
		std::cout << "Base::doSomething2 non virtual" << std::endl;
	}
	virtual void doSomething4() {//виртуальный метод 4
		std::cout << "Base::doSomething2 virtual" << std::endl;
	}
	virtual std::string classname() {//метод возвращения имени класс объекта
		return "Base";
	}
	/*virtual bool IsA(std::string classname);*///метод для предварительной проверки при работе  с небезопасным приведением типов
};
class Desk  : public Base {//Дочерний класс
public:
	Desk(){

	}
	Desk(Desk* obj){

	}
	Desk(Desk& obj){

	}
	~Desk() {

	}
	void doSomething3() {//невиртуальный метод 3
		std::cout << "Desk::doSomething2 non virtual" << std::endl;
	}
	void doSomething4() override{//виртуальный метод 4
		std::cout << "Desk::doSomething2 virtual" << std::endl;
	}
	std::string classname() override {
		return "Desk";
	}
};
int main() {
	Desk testDaughter;
	std::cout << "Result of Desk::doSomething1() and non virtual method2: " << std::endl;
	testDaughter.doSomething1();
	std::cout << std::endl;
	std::cout << "Result of Desk::doSomething1() and virtual method2: " << std::endl;
	testDaughter.doSomething2();
	return 0;
}