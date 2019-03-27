#pragma once
#include <exception>
// Dylan is a know-it-all
namespace CSC252HW2
{
	const size_t DEFAULT_SIZE = 20;
	
	template< typename T>

	class Vector
	{
	public:
		Vector<T>();
		Vector<T>(size_t);
		Vector<T>(size_t, T);
		~Vector();
		// add/remove element and increase or decease size accordingly
		void pushback(const T&);
		void popback();

		bool empty() const;
		unsigned size() const;
		void clear();
		T at(const size_t pos) const;

		void swap(Vector&, Vector&);

	private:
		size_t m_size = 0;
		T* m_data = nullptr;
		void EnsureCapacity();
		int capacity = 0;
	};

	// #######################################################################
	// Default ctor
	template<typename T>
	Vector<T>::Vector()
	{
		m_data = new T[DEFAULT_SIZE];
		m_size = 0;
	}

	// ctor with size
	template<typename T>
	Vector<T>::Vector(size_t sz) // sz not 0
	{
		if(sz != 0)
		{
			m_data = new T[sz];
			m_size = 0;
		}
		else
		{
			throw std::runtime_error("CSC252HW2::vector<T>::Vector(size_t) size is already zero.");
		}

	}


	// ctor with size and a value
	template<typename T>
	Vector<T>::Vector(size_t sz, T Val)
	{
		m_data = new T[sz];
		if (m_data != nullptr)
		{
			
			for (size_t i = 0; i < sz; i++)
			{
				m_data[i] = Val;
			}
			m_size = sz;
		}
	}

	// dtor
	template<typename T>
	Vector<T>::~Vector()
	{
		
	}


	// check if vector is empty
	template<typename T>
	bool Vector<T>::empty() const
	{
		return (m_data == 0);
	}
	

	// check size
	template<typename T>
	unsigned Vector<T>::size() const
	{
		return static_cast<unsigned>(m_size);
	}
	

	// swap values
	template<typename T>
	void Vector<T>::swap(Vector& var1, Vector& var2)
	{
		Vector temp = var1;
		var1 = var2;
		var2 = temp;
	}


	// clear vector
	template<typename T>
	void Vector<T>::clear()
	{
		m_size = 0;
	}


	// add element
	template<typename T>
	void Vector<T>::pushback(const T& push)
	{
		EnsureCapacity();

		if (m_data != nullptr)
		{
			m_data[m_size] = push;
			m_size++;
		}
		/*else
		{
			throw std::runtime_error("CSC252HW2::vector<T>::at(..) : no data at position");
		}*/
	}


	// remove element
	template<typename T>
	void Vector<T>::popback()
	{
		if(m_size != 0)
			m_size--;
		/*else
		{
			throw std::runtime_error("CSC252HW2::vector<T>::popback() : size is zero");
		}*/
	}


	// ensure capacity of vector is sufficient
	template<typename T>
	void Vector<T>::EnsureCapacity()
	{
		if (m_size >= capacity)
		{
			T* old = m_data;
			capacity =  m_size * 2;
			m_data = new T[m_size * 2];

			for (int i = 0; i < m_size; i++)
			{
				m_data[i] = old[i];
			}
			delete [] old;
		}
	}


	// look at value at position at()
	template<typename T>
	T Vector<T>::at(const size_t pos) const
	{
		/*if (m_size == 0)
		{
			throw std::runtime_error("CSC252HW2::vector<T>::at() Vector is empty");
		}
		if (pos > m_size)
		{
			throw std::runtime_error("CSC252HW2::vector<T>::at(..) : no data at this position");
		}*/
		return m_data[pos];
	}

}