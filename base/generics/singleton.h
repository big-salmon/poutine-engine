#pragma once
#include <memory>

template <class T>
class Singleton
{

private:
	static std::unique_ptr<T> m_pInstance = std::unique_ptr<T>(new T());

public:
	static std::unique_ptr<T> GetInstance();
	Singleton(Singleton const&) = delete;
	void operator=(Singleton const&) = delete;
};

template <typename T>
std::unique_ptr<T> Singleton<T>::GetInstance()
{
	return m_pInstance;
}

