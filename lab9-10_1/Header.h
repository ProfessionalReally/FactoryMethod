#pragma once

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

//�������
class Diagnosis
{
public:
	virtual string GetName() = 0;
};

//������� ������
class DiabetesDiagnosis : public Diagnosis
{
public:
	string GetName() { return "DiabetesDiagnosis"; }
};

//������� ����
class SARSDiagnosis : public Diagnosis
{
public:
	string GetName() { return "SARSDiagnosis"; }
};

class Creator
{
public:
	virtual Diagnosis* FactoryMethod() = 0;
};

class DiabetesCreator : public Creator
{
	Diagnosis* FactoryMethod() 
	{
		cout << "\nCreated DiabetesDiagnosis\n";
		return new DiabetesDiagnosis();
	}
};

class SARSCreator : public Creator
{
	Diagnosis* FactoryMethod()
	{
		cout << "\nCreated SARSDiagnosis\n";
		return new SARSDiagnosis();
	}
};