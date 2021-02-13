/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:55:00 by nforay            #+#    #+#             */
/*   Updated: 2021/02/13 18:17:15 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:

		Array<T>() : m_array(new T[0]()), m_size(0) {};
		Array<T>(const unsigned int & n) : m_array(new T[n]()), m_size(n)
			{
			//	for (unsigned int i = 0; i < this->m_size; i++)
			//			this->m_array[i] = 0;
			};
		Array<T>( Array const & src ) : m_array(new T[src.size()]()), m_size(src.size())
			{
				for (unsigned int i = 0; i < this->m_size; i++)
						this->m_array[i] = src[i];
			};
		~Array<T>()
		{
			delete [] this->m_array;
		};

		Array<T> &			operator=( Array const & rhs ){
			if (this != &rhs)
			{
				delete [] this->m_array;
				this->m_size = rhs.size();
				this->m_array = new T[this->m_size]();
				for (unsigned int i = 0; i < rhs.size(); i++)
						this->m_array[i] = rhs[i];
			}
			return *this;
		};
		T &			operator[] (unsigned int const &n){ //write operator []
			if (this->m_size > n)
				return this->m_array[n];
			else
			{
				throw OutOfLimitsException();
			}
		};
		const T &	operator[] (unsigned int const &n) const{ //read operator []
			if (this->m_size > n)
				return this->m_array[n];
			else
			{
				throw OutOfLimitsException();
			}
		};

		unsigned int	size() const{
			return (this->m_size);
		};

		class OutOfLimitsException : public std::exception
		{
			public:
				OutOfLimitsException() : m_message("Array Exception: Out of limits.") {}
				virtual ~OutOfLimitsException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		T				*m_array;
		unsigned int	m_size;

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & i ){
	o << "[";
	for (unsigned int j = 0; j < i.size(); j++)
	{
		if (j + 1 == i.size())
			o << i[j];
		else
			o << i[j] << ", ";
	}
	o << "]";
	return o;
};

template <>
std::ostream &			operator<<( std::ostream & o, Array<std::string> const & i ){
	o << "[";
	for (unsigned int j = 0; j < i.size(); j++)
	{
		if (j + 1 == i.size())
			o << "\"" << i[j] << "\"";
		else
			o << "\"" << i[j] << "\", ";
	}
	o << "]";
	return o;
};

template <>
std::ostream &			operator<<( std::ostream & o, Array<char> const & i ){
	o << "[";
	for (unsigned int j = 0; j < i.size(); j++)
	{
		if (j + 1 == i.size())
			o <<"\'" << i[j] << "\'";
		else
			o << "\'" << i[j] << "\', ";
	}
	o << "]";
	return o;
};

#endif /* *********************************************************** ARRAY_H */
