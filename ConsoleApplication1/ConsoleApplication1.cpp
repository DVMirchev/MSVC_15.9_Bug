﻿// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


class Base
{
public:
   virtual void Func() = 0;

};

class BaseImpl : virtual public Base
{
public:
   virtual ~BaseImpl() = default;
   virtual void Func() override {};

};

class Moo : virtual public Base
{
public:
   virtual void moo() = 0;
};

class MooImpl : virtual public Moo,
                public BaseImpl
{
public:
   MooImpl():Moo(){}; // crash occurs here

   virtual void moo() override {};
};

int main()
{
   MooImpl a;
}
