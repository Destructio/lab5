#pragma once
using namespace System;
using namespace System::Windows::Forms;

#include <cmath>
#include <vector>

void fillArray(double[], int);
std::vector<double> createNewArray(double[], int);
void output(double[], int, ListBox^);
void output(std::vector<double>, ListBox^);