#include "data_box.h"

using namespace std;

DataBox::DataBox(size_t startReserve) {
	elemCount = 0;
	reserved = startReserve;

	if (reserved > 0)
		buffer = new int[reserved];
	else
		buffer = nullptr;

	cout << "DataBox -> Default konstruktor, reserved = "<< reserved << endl;
	
}


DataBox::DataBox(const DataBox& src) {
	elemCount = src.elemCount;
	reserved = src.reserved;

	if (reserved > 0) {
		buffer = new int[reserved];
		for (size_t i = 0; i < elemCount; i++)
			buffer[i] = src.buffer[i];
	}
	else
		buffer = nullptr;
	cout << "DataBox -> Copy konstruktor\n";
}


DataBox::DataBox(DataBox&& src) noexcept {
	elemCount = src.elemCount;
	reserved = src.reserved;
	buffer = src.buffer;

	src.buffer = nullptr;
	src.elemCount = 0;
	src.reserved = 0;

	cout << "DataBox -> Move konstruktor\n";
}


DataBox::~DataBox() {
	delete[] buffer;
	cout << "DataBox -> Destruktor\n";
}


void DataBox::append(int value) {
	if (elemCount == reserved) {
		size_t newReserved = (reserved == 0) ? 1 : reserved * 2;
		int* newBuf = new int[newReserved];

		for (size_t i = 0; i < elemCount; i++)
			newBuf[i] = buffer[i];

		delete[] buffer;
		buffer = newBuf;
		reserved = newReserved;
	}
	buffer[elemCount++] = value;
}


size_t DataBox::count() const {
	return elemCount;
}

size_t DataBox::capacity() const {
	return reserved;
}

int DataBox::get(size_t index) const {

	if (index >= elemCount)
		throw out_of_range("Index out of range");
	return buffer[index];
}


void DataBox::reset() {
	elemCount = 0;
}


void DataBox::debug(const char* label) const {
	cout << label << "[count=" << elemCount << ", capacity=" << reserved << "]: ";

	for (size_t i = 0; i < elemCount; i++)
		cout << buffer[i] << " ";
	cout << "\n";
}

















