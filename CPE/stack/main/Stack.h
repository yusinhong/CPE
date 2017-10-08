#pragma once
template<class T>
class CStack{
private:
	T*m_Array;
	unsigned int m_RealSize;
	unsigned int m_Num;
public:
	CStack(){
		m_RealSize = 0;//can put
		m_Num = 0;//now put
		m_Array = NULL;
	};
	~CStack(){
		delete[]m_Array;
	};
	T PopBack(){
		--m_Num;
		T value = m_Array[m_Num];
		return value;
	};
	bool PushBack(T value){
		if (m_RealSize == 0)
		{
			m_Array = new T[20];
			m_Array[0] = value;
			m_Num = 1;
			m_RealSize = 20;
		}
		else if (m_RealSize > 0 && m_Num == m_RealSize)
		{
			T*NArray = new T[m_RealSize + 20];
			if (!NArray)return false;
			memcpy(NArray, m_Array, sizeof(T)*m_RealSize);
			delete[]m_Array;
			m_Array = NArray;
			m_Array[m_RealSize] = value;
			m_Num = m_RealSize + 1;
			m_RealSize += 20;
		}
		else if (m_RealSize > 0 && m_Num < m_RealSize)
		{
			m_Array[m_Num] = value;
			m_Num++;
		}
		return true;
	};
};