#include <iostream>
#include <stdio.h>

using namespace std;

struct Vector {
	int* data;
	int size;
	int capacity;
};


Vector vector_new(int init_capacity) {
	Vector v;
	v.size = 0;
	v.data = new int[init_capacity];
	v.capacity = init_capacity;

	return v;
}

void vector_delete(Vector& v) {
	delete[] v.data;
	v.data = nullptr;
	v.size = 0;
	v.capacity = 0;
}

void vector_push_back(Vector& v, int value) {
	if (v.size >= v.capacity) {
		int new_capacity = v.capacity * 2;
		int* new_data = new int[new_capacity];

		for (int i = 0; i < v.size; i++) {
			new_data[i] = v.data[i];
		}

		delete[] v.data;
		v.data = new_data;
		v.capacity = new_capacity;
	}
	v.data[v.size++] = value;
}


void vector_pop_back(Vector& v) {
	if (v.size > 0) {
		v.size--;
	}
}


int vector_front(Vector& v) {
	if (v.size == 0) {
		cout << "Vektor je prazan!" << endl;
		return -1;
	}
	return v.data[0];
}


int vector_back(const Vector& v) {
	if (v.size == 0) {
		cout << "Vektor je prazan!" << endl;
		return -1;
	}
	return v.data[v.size - 1];
}

int vector_size(const Vector& v) {
	return v.size;
}


int main() {

	Vector v = vector_new(2);

	vector_push_back(v, 10);
	vector_push_back(v, 20);
	vector_push_back(v, 30);

	cout << "Broj elemenata: " << vector_size(v) << endl;
	cout << "Prvi element: " << vector_front(v) << endl;
	cout << "Zadnji element: " << vector_back(v) << endl;

	cout << "Sadrzaj vektora: " << endl;
	for (int i = 0; i < v.size; i++) {
		cout << v.data[i] << " " << endl;
	}

	vector_pop_back(v);
	cout << "Nakon pop_back(): " << vector_size(v) << " elementa" << endl;

	vector_delete(v);

	return 0;
}