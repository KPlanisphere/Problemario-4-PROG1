# FUNCIONES EN C
## Problemario 4 - Programacion 1

 1. Escriba un programa que imprima los coeficientes de un binomio a la n-ésima potencia. 	
Ejemplo: 

		Entrada: 𝑛=4		Salida: 1 4 6 4 1 
		Entrada: 𝑛=6		Salida: 1 6 15 20 15 6 1
	Utilice números combinatorios: 
		$$\binom{m}{n}=\frac{m!}{n!(m-n)!}$$

 2. Escriba un programa que imprima el triángulo de Pascal. Utilice números combinatorios.
 3. Cree un programa en C que solicite números naturales hasta que el usuario desee terminar. Por cada número dado se deberá visualizar:
  a. Si el numero es primo: su factorial.
	b. Si el numero no es primo: sus múltiplos menores que 1000 
	c. Nota: El programa debe estar diseñado con funciones utilizando parámetros y variables 						locales.

 4. El desarrollo en serie de Taylor de la función coseno es: 
 $$cos(x)=1-\frac{x^{2}}{2!}+\frac{x^{4}}{4!}-\frac{x^{6}}{6!}+...$$ Donde el ángulo 𝑥 viene expresado en radianes. 
 Escriba un programa que calcule el valor aproximado de cos(𝑥), utilizando para ellos los 𝑛 primeros términos de la serie de Taylor. 
Nota: No utilice la función 𝑝𝑜𝑤() de la biblioteca math.h para calcular la potencia, Implemente su propia versión.

 5. Escriba un programa que mediante dos funciones convierta de grados centígrados a Fahrenheit y de Fahrenheit a Centígrados, dependiendo de la opción que proporcione el usuario.
 
 6. Escriba un programa que solicite el peso (Kg) y la altura (mts) de una persona y calcule su índice de masa corporal (IMC). Con base en este resultado, el programa deberá informar que clasificación pertenece dicha persona:$$IMC=\frac{Peso(kg)}{Estatura^{2}(Mts.)}$$
 
|Indice de Masa Corporal (IMC)|Clasificación|
|--|--|
| Menor a 18 |Peso bajo. Necesario valorar signos de desnutrición|
| 18 a 24.9 |Normal|
| 25 a 26.9 |**Sobrepeso**|
| Mayor a 27 | **Obesidad** |
| 27 a 29.9 | **Obesidad grado I.** Riesgo relativo alto para desarrollar enfermedades cardiovasculares |
| 30 a  39.9 | **Obesidad grado II.** Riesgo relativo muy alto para el desarrollo de enfermedades cardiovasculares |
| Mayor a 40| **Obesidad grado III Extrema O Mórbida.** Riesgo relativo extremadamente alto para el desarrollo de enfermedades cardiovasculares |

	Nota: Escriba una función para calcular el IMC y otra que muestre la clasificación.

 7. Modifique el programa anterior de tal forma que el proceso termine hasta que el usuario desee salir.
