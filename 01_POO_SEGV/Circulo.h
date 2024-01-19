#pragma once
#include "Prerequisites.h"

namespace

	class C�rculo
{
public:
	Circulo(float _radio) : m_radio (_radio) {}
	~C�rculo() = default;

	float area() {
		return m_PI * pow(m_radio, 2);

	}

	float perimetro() {
		return 2 * (m_PI * m_radio);
	}

private:
	float m_radio;
	float m_PI = 3.1416;
};