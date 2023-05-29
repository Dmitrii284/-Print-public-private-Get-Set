#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
#include<string>

//Вывод данных функцией Print() Модификаторы Доступа public: private:Методы класса (функции) Get Set
/*
class Human
{
	
public:


	std::string _name;
	int _age;
	int _weight;

	void Print() // Прописываем функциювывода данных (без значений) Их копии она вывщдит сама
	{
		std::cout << "\nИмя " << _name << "\nВозраст " << _age << "\nВес " << _weight << std::endl<< std::endl;
	}
	

};
*/

// Модификаторы Доступа public: private:
/*
class Point
{
public:// Работает до тех пор пока не встретит новый модификатор доступа например protected private

	int x;
	void Print()// Через метод Print получили доступ к остальным полям класса Point
	{
		std::cout <<"x " << x<<"\ny " << y <<"\nz " << z << std::endl;
		PrintY(); //Это рекурсия метода  PrintY можно выхывать из другого модификатора доступа.
	}
	
private:
	int y;
	void PrintY()
	{
		std::cout << "Вызов из другого модификатора доступа private его значений PrintY()" << std::endl;
		std::cout << "y " << y << std::endl;
		
	}
protected:
	int z;
};
*/

//Методы класса (функции) Get Set . Get - Get -Получить(Вывести или Вернуть) данные!!, Set - Установить (Задать параметр) данные!! Запрет
//Замены изменения значения в поле SetУ 
/*
class Human
{
private:
	int x;
	int y;
public:
	// Get Set Это public Методы!!! Get -Получить данные!!, Set - Установить данные!!
// Get -Получить данные Позволяет получить даные из другого поля, Модификатора private Должен Возвращать !!RETURN

	int GetX()// Метод возвращаемого типа данных int и начинается со слова Get!!!
	{
	 return x;
	}
	//Метод Set Устанавливает параметры какие хотим.Он принимает параметр (int x)
	void SetX(int velueX )  //Set - Установить данные!! Используем выводящий тип void и ключевое слово Set 
	{
		x = velueX;
	}
	void Print()
	{
		std::cout << "X " << x << "\nY " << y << std::endl;
	}

	int GetY() 
	{
		return y;
	}
	void SetY(int velueY)//Если мы н хотим чтобы пользователь устанавливал или менял значение то не пишем его. и тут a.SetY(11); он не изменит значение.
	{
		y = velueY*2;
	}

};
*/

//Инкапсуляция
class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return false;
	}
	
public:
	void Start()
	{
		bool voltagIsNormal = CheckVoltage();
		if (voltagIsNormal)
		{ 
		std::cout << "vJJJJJJJJ" << std::endl;
		}
		else
		{
			std::cout << "Beep Beep" << std::endl;
		}
	}
};


int main() {
	setlocale(LC_ALL, "Rus");
//Вывод данных функцией Print()
/*
	Human firstHuman;//Вывод данных у этого обекта завист от него И именно его ниформацию выводит метод firstHuman.Print();
	firstHuman._name = "Ivanov";
	firstHuman._age = 30;
	firstHuman._weight = 100;
	firstHuman.Print();

	Human secondHuman;
	secondHuman._name = "Петров";
	secondHuman._age = 60;
	secondHuman._weight = 80;
	secondHuman.Print();
	*/

// Модификаторы Доступа public: private:
/*
	Point a;
	a.Print();
	*/

//Методы класса (функции) Get Set . Get - Get -Получить(Вывести или Вернуть) данные!!,	
/*
	Human a;
	a.SetX(5); // Устанавливаем значение значение (5) и + не установленное У
	//a.Print(); // Выводим значения которые прописали в Функции выше void Print()
	int resultX = a.GetX();//Зададим переменную result мы не хотим выводить с помощью a.Print(), а инужно 1 значение одного поля Х. Поле Y нам не нужно.
	std::cout << "resultX " << resultX << std::endl;
	
	a.SetY(11);// И тут пользователь не сможет поменять занчение  У
	a.Print();
	int resultY = a.GetY();
	std::cout << "resultY " << resultY << std::endl;
	*/

//Инкапсуляция
	CoffeeGrinder a;
	a.Start();


	return 0;
}