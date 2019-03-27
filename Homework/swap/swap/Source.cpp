
template<typename T>
void swap(T& var1, T& var2)
{
	T temp = var1;
	var1 = var2;
	var2 = temp;
}



int main()
{
	int v1 = 1;
	int v2 = 2;

	double d1 = 3;
	double d2 = 4;

	swap(v1, v2);
	swap(d1, d2);

	return 0;
}