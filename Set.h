#pragma once
#include <string>
	using namespace std;

class Set
{
public:
	class BitString
	{
	private:

		unsigned long first;
		unsigned long second;

	public:
		BitString(unsigned long f, unsigned long s);
		BitString(const BitString& b);
		BitString();

		BitString& operator =(const BitString& b);
		operator string() const;
		friend ostream& operator << (ostream& out, BitString& b);
		friend istream& operator >> (istream& in, BitString& b);



		unsigned long getFirst()const { return first; }
		unsigned long getSecond()const { return second; }

		void setFirst(unsigned long f) { first = f; }
		void setSecond(unsigned long s) { second = s; }

		void Read();
		void Display();
		void Init(unsigned long l, unsigned long r);
		string toString();

		void Not();
		friend BitString And(BitString l, BitString r);
		friend BitString Or(BitString l, BitString r);
		friend BitString XOr(BitString l, BitString r);

		void ShiftLeft(int pos);
		void ShiftRight(int pos);

		BitString& operator++();
		BitString& operator--();
		BitString operator++(int);
		BitString operator--(int);


	};
private:
		BitString a;
public:
	Set();
	Set(const Set& s);
	Set(BitString b);

	Set& operator=(const Set& s);
	operator string() const;
	friend ostream& operator << (ostream& out, Set& s);
	friend istream& operator >> (istream& in, Set& s);


	BitString getA()const { return a; }
	void setA(unsigned long l, unsigned long r);

	void Read();
	void Display();
	void Init(unsigned long l, unsigned long r);
	string toString();

	void Exclude(int pos);
	void Include(int pos);
	int Count();
	friend Set Union(Set l, Set r); //obyednannya
	friend Set Intersection(Set l, Set r); //peretyn
	friend Set Substraction(Set l, Set r); //riznycya

	Set& operator++();
	Set& operator--();
	Set operator++(int);
	Set operator--(int);


};