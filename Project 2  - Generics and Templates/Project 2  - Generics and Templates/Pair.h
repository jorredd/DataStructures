#pragma once
#include <string>
using std::string;
template<class T>
class Pair
{
public:
	Pair();
	Pair(T firstVale, T secondVal);
	//int id; Ill see what i can do with this later
	void setFirst(T newVal);
	void setSecond(T newVal);
	T getFirst();
	T getSecond();
	T *next;
private:
	T first;
	T second;

};
template<class T>
Pair<T>::Pair()
{
	this->first = NULL;
	this->second = NULL;
}
template<class T>
Pair<T>::Pair(T firstVal, T secondVal)
{
	this->first = firstVal;
	this->second = secondVal;
}
template <class T>
void Pair<T>::setFirst(T newVal)
{
	this->first = newVal;
}
template <class T>
void Pair<T>::setSecond(T newVal)
{
	this->second = newVal;
}
template <class T>
T Pair<T>::getFirst() 
{
	return this->first;
}
template <class T>
 T Pair<T>::getSecond()
{
	 return this->second;
}