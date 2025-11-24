#pragma once
#include <iostream>

class DataBox {
private:
	int* buffer;
	size_t elemCount;
	size_t reserved;

public:
	DataBox(size_t startReserve = 0);
	DataBox(const DataBox& src);
	DataBox(DataBox&& src) noexcept;
	~DataBox();

	void append(int value);
	size_t count() const;
	size_t capacity() const;
	int get(size_t index) const;
	void reset();

	void debug(const char* label) const;
};
