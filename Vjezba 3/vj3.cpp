//#include #include
//using namespace std;
///*
////1.
//inline bool ascending(int a, int b) {
//return a < b;
//}
//inline bool descending(int a, int b) {
//return a > b;
//}
//
//void sortt(int arr[], size_t n, bool(*cmp)(int, int)) {
//for (size_t i = 0; i < n - 1; ++i) {
//for (size_t j = i + 1; j < n; ++j) {
//if (!cmp(arr[i], arr[j])) {
//int temp = arr[i];
//arr[i] = arr[j];
//arr[j] = temp;
//}
//}
//}
//}
//
//int main() {
//int niz[] = { 5, 1, 9, 3, 7 };
//size_t n = sizeof(niz) / sizeof(niz[0]);
//
//cout << "pocetni niz: ";
//for (int x : niz) cout << x << " ";
//cout << endl;
//
//sortt(niz, n, ascending);
//cout << "uzlazno: ";
//for (int x : niz) cout << x << " ";
//cout << endl;
//
//sortt(niz, n, descending);
//cout << "silazno: ";
//for (int x : niz) cout << x << " ";
//cout << endl;
//system("pause");
//return 0;
//}
//*/
////2.
//template inline bool
//ascending(T a, T b)
//{
//	return a < b;
//}
//template inline bool
//descending(T a, T b)
//{
//	return a > b;
//}
//template void
//sortt(T arr[], size_t n, bool(*cmp) (T, T))
//{
//	for (size_t i = 0; i < n - 1; ++i)
//	{
//		for (size_t j = i + 1; j < n; ++j)
//		{
//			if (!cmp(arr[i], arr[j]))
//			{
//				T temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int
//main()
//{
//	int niz[] = { 5, 1, 9, 3, 7 };
//	size_t n = sizeof(niz) / sizeof(niz[0]);
//
//	cout << "pocetni niz: ";
//	for (int x : niz)
//		cout << x << " ";
//	cout << endl;
//
//	sortt(niz, n, ascending);
//	cout << "uzlazno: ";
//	for (int x : niz)
//		cout << x << " ";
//	cout << endl;
//
//	sortt(niz, n, descending);
//	cout << "silazno: ";
//	for (int x : niz)
//		cout << x << " ";
//	cout << endl;
//	5 system("pause");
//	return 0;
//}