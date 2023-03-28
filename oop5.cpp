#include<iostream>
class Prototype {//родительский класс
public:
	Prototype();//конструктор
	virtual ~Prototype();//виртуальный деструктор
	void doSomething1() {//невиртуальный метод 1
		std::cout << "Prototype::doSomething1" << std::endl;
		doSomething3();
	}
	void doSomething2() {//невиртуальный метод 2
		std::cout << "Prototype::doSomething2" << std::endl;
		doSomething4();
	}
	void doSomething3() {//виртуальный метод 3
		std::cout << "Prototype::doSomething3" << std::endl;
	}
	virtual void doSomething4() {//виртуальный метод 4
		std::cout << "Prototype::doSomething4" << std::endl;
	}
	virtual Prototype* clone() = 0;//метод создания клонов согласно паттерну Prototype
	virtual std::string classname() {//метод возвращения имени класс объекта
		return "Prototype";
	}
	virtual bool IsA(std::string classname) {//метод для предварительной проверки при работе  с небезопасным приведением типов

	}
};
class Daughter  : public Prototype{//Дочерний класс от класса-прототипа
public:
	Daughter() : Prototype() {};

};