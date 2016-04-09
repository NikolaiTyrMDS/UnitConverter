#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ТЕМПЕРАТУРЫ  */

/* Градусы: Цельсий, Фаренгейт, Кельвин, Реомюра, Ранкина, Ньютона, Рёмера, Делисле */

/*------------------------Единица измерения Цельсия и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Цельсий> ---> <Фаренгейт> //
double CelsiusTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 1.8 ) + 32; // Для перевода температуры из шкалы Цельсия в шкалу Фаренгейта нужно умножить исходное число на 9/5 и прибавить 32
	return TEMPERATURE;
}

// <Цельсий> ---> <Кельвин> //
double CelsiusTOKelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE + 273.15; // Перевод кельвинов в градусы цельсия. Расчет происходит по формуле: T=t+T0 , где T- температура в кельвинах, t- температура в градусах цельсия, T0=273.15 кельвина. P.S. По размеру градус цельсия равен кельвину.
	return TEMPERATURE;
}

// <Цельсий> ---> <Реомюр> //
double CelsiusTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 0.8; // Температура по Реомюру = Температура по Цельсия * 4 / 5
	return TEMPERATURE;
}

// <Цельсий> ---> <Ранкин> //
double CelsiusTORankines(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE + 273.15) * 1.8 ; //Температура по Ранкину = (Температура по Цельсия + 273.15) * (9 / 5)
	return TEMPERATURE;
}

// <Цельсий> ---> <Ньютон> //
double CelsiusTONewtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 33) / 100 ; // Температура по Ньютону = [°N]=[°C]*33/100 Уточнить надо !!!!!!!!! так как получается пример 0.33 и т.д
    return TEMPERATURE;
}

// <Цельсий> ---> <Рёмера> //
double CelsiusTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE  * 21/40) + 7.5 ; //Температура по Рёмеру = °Ro]=[°C]*21/40+7.5 Тоже следует уточнить, формула правильная !!!!
    return TEMPERATURE;
}


// <Цельсий> ---> <Делисле> //
double CelsiusTODelisles(double TEMPERATURE) {
	TEMPERATURE = (100 - TEMPERATURE) * 1.5 ;    // Температура по Делисле = [°De]=(100-[°C])*3/2
    return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/



/*------------------------Единица измерения Фаренгейт и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Фаренгейт> ---> <цельсий> //
double FahrenheitsTOCelsiuss(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 32) * 5/9;  // Для перевода температуры из шкалы Фаренгейта в шкалу Цельсия нужно воспользоваться формулой [°C]=([°F]-32)*5/9
	return TEMPERATURE;
}

// <Фаренгейт> ---> <Кельвин> //
double FahrenheitsTOKelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE + 459.67) * 5/9;  // Для перевода температуры из шкалы Фаренгейта в шкалу Кельвина нужно воспользоваться формулой [°K]=([°F]+459.67)*5/9
	return TEMPERATURE;
}


// <Фаренгейт> ---> <Реомюра> //
double FahrenheitsTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 32) * 4/9; // Для перевода температуры из шкалы Фаренгейта в шкалу Реомюра нужно воспользоваться формулой [°Re]=([°F]-32)*4/9
	return TEMPERATURE;
}

// <Фаренгейт> ---> <Ранкина> //
double FahrenheitsTORankines(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE + 459.67; // Для перевода температуры из шкалы Фаренгейта в шкалу Ранкина нужно воспользоваться формулой [°R]=[°F]+459.67
	return TEMPERATURE;
}

// <Фаренгейт> ---> <Ньютона> //
double FahrenheitsTONewtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 32) * 11/60;  // Для перевода температуры из шкалы Фаренгейта в шкалу Ньютона нужно воспользоваться формулой [°N]=([°F]-32)*11/60 !!!! Уточнить с переводом !!!!
	return TEMPERATURE;
}

// <Фаренгейт> ---> <Рёмера> //
double FahrenheitsTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 32) * 7/24 + 7.5; // Для перевода температуры из шкалы Фаренгейта в шкалу Рёмера нужно воспользоваться формулой [°Ro]=([°F]-32)*7/24+7.5 !!!! Нужно уточнить с переводм !!!!
	return TEMPERATURE;
}

// <Фаренгейт> ---> <Делисле> //
double FahrenheitsTODelisles(double TEMPERATURE) {
	TEMPERATURE = (212 - TEMPERATURE) * 5/6; // Для перевода температуры из шкалы Фаренгейта в шкалу Делисле нужно воспользоваться формулой [°De]=(212-[°F])*5/6
	return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Кельвин и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Кельвин> ---> <Фаренгейт> //
double KelvinsTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 9/5 ) - 459.67; //Для перевода температуры из шкалы Кельвина в шкалу Фаренгейта  нужно воспользоваться формулой   [°F]=[°K]*9/5-459.67
	return TEMPERATURE;
}

// <Кельвин> ---> <Цельсий> //
double KelvinsTOCelsius(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE - 273.15; //Для перевода температуры из шкалы Кельвина в шкалу Цельсий  нужно воспользоваться формулой   [°C]=[°K]-273.15
	return TEMPERATURE;
}

// <Кельвин> ---> <Реомюра> //
double KelvinsTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE  - 273.15) * 4/5; //Для перевода температуры из шкалы Кельвина в шкалу Реомюра нужно воспользоваться формулой   [°Re]=([°K]-273.15)*4/5
	return TEMPERATURE;
}

// <Кельвин> ---> <Ранкина> //
double KelvinsTORankines(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 9/5; //Для перевода температуры из шкалы Кельвина в шкалу Ранкина  нужно воспользоваться формулой   [°R]=[°K]*9/5
	return TEMPERATURE;
}

// <Кельвин> ---> <Ньютона> //
double KelvinsTONewtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 273.15) * 33/100; //Для перевода температуры из шкалы Кельвина в шкалу Ньютона нужно воспользоваться формулой  	[°N]=([°K]-273.15)*33/100  !!!! Уточнить !!!!
	return TEMPERATURE;
}

// <Кельвин> ---> <Рёмера> //
double KelvinsTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 273.15) * 21/40 + 7.5; //Для перевода температуры из шкалы Кельвина в шкалу Рёмера нужно воспользоваться формулой  	[°Ro]=([°K]-273.15)*21/40+7.5  !!!! Уточнить !!!!
	return TEMPERATURE;
}

// <Кельвин> ---> <Делисле> //
double KelvinsTODelisles(double TEMPERATURE) {
	TEMPERATURE = ( 373.15 - TEMPERATURE) * 3/2; //Для перевода температуры из шкалы Кельвина в шкалу Делисле нужно воспользоваться формулой  [°De]=(373.15-[°K])*3/2
	return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


/*------------------------Единица измерения Реомюра  и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Реомюра> ---> <Кельвин> //
double ReaumursTOKelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE  * 5/4) + 273.15; //Для перевода температуры из шкалы Реомюра в шкалу Кельвина  нужно воспользоваться формулой   [°K]=[°Re]*5/4+273.15
	return TEMPERATURE;
}

// <Реомюра> ---> <Фаренгейт> //
double ReaumursTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 9/4) + 32; //Для перевода температуры из шкалы Реомюра в шкалу Фаренгейт  нужно воспользоваться формулой   [°F]=[°Re]*9/4+32
	return TEMPERATURE;
}

// <Реомюра> ---> <Цельсий> //
double ReaumursTOCelsius(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 5/4; //Для перевода температуры из шкалы Реомюра в шкалу Цельсия   нужно воспользоваться формулой  [°C]=[°Re]*5/4
	return TEMPERATURE;
}

// <Реомюра> ---> <Ранкина> //
double ReaumursTORankines(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 9/4) + 491.67; //Для перевода температуры из шкалы Реомюра в шкалу Ранкина   нужно воспользоваться формулой  [°R]=[°Re]*9/4+491.67
	return TEMPERATURE;
}

// <Реомюра> ---> <Ньютона> //
double ReaumursTONewtons(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 33/80; //Для перевода температуры из шкалы Реомюра в шкалу Ньютона   нужно воспользоваться формулой  [°N]=[°Re]*33/80
	return TEMPERATURE;
}

// <Реомюра> ---> <Рёмера> //
double ReaumursTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 21/32) + 7.5; //Для перевода температуры из шкалы Реомюра в шкалу Рёмера   нужно воспользоваться формулой  [°Ro]=[°Re]*21/32+7.5 !!!! Уточнить !!!!
	return TEMPERATURE;
}

// <Реомюра> ---> <Делисле> //
double ReaumursTODelisles(double TEMPERATURE) {
	TEMPERATURE = ( 80 - TEMPERATURE) * 15/8 ; //Для перевода температуры из шкалы Реомюра в шкалу Делисле   нужно воспользоваться формулой  	[°De]=(80-[°Re])*15/8
	return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Ранкина и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Ранкина> ---> <Реомюра> //
double RankinesTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 491.67) * 4/9 ; //Для перевода температуры из шкалы Ранкина в шкалу Реомюра   нужно воспользоваться формулой 	[°Re]=([°R]-491.67)*4/9 !!!!Нужно уточнить !!!!
 	return TEMPERATURE;
}

// <Ранкина> ---> <Кельвин> //
double RankinesTOKelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 5/9; //Для перевода температуры из шкалы Ранкина в шкалу Кельвина  нужно воспользоваться формулой  	[°K]=[°R]*5/9
        return TEMPERATURE;
}

// <Ранкина> ---> <Фаренгейт> //
double RankinesTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE - 459.67; //Для перевода температуры из шкалы Ранкина в шкалу Фаренгейта  нужно воспользоваться формулой 	[°F]=[°R]-459.67
        return TEMPERATURE;
}

// <Ранкина> ---> <Цельсий> //
double RankinesTOCelsius(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 491.67) * 5/9 ; //Для перевода температуры из шкалы Ранкина в шкалу Цельсия  нужно воспользоваться формулой [°C]=([°R]-491.67)*5/9  !!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Ранкина> ---> <Ньютона> //
double RankinesTONewtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 491.67) * 11/60 ; //Для перевода температуры из шкалы Ранкина в шкалу Ньютона  нужно воспользоваться формулой 	[°N]=([°R]-491.67)*11/60 !!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Ранкина> ---> <Рёмера> //
double RankinesTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 491.67) * 7/24 + 7.5 ; //Для перевода температуры из шкалы Ранкина в шкалу Ремера  нужно воспользоваться формулой 	[°Ro]=([°R]-491.67)*7/24+7.5 !!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Ранкина> ---> <Делисле> //
double RankinesTODelisles(double TEMPERATURE) {
	TEMPERATURE = (671.67 - TEMPERATURE ) * 5/6; //Для перевода температуры из шкалы Ранкина в шкалу Делисле  нужно воспользоваться формулой 	[°De]=(671.67-[°R])*5/6!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Ньютона и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Ньютона> ---> <Ранкина> //
double NewtonsTORankines(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 60/11) + 491.67; //Для перевода температуры из шкалы Ньютона в шкалу Ранкина  нужно воспользоваться формулой  [°R]=[°N]*60/11+491.67
        return TEMPERATURE;
}

// <Ньютона> ---> <Реомюра> //
double NewtonsTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 80/33; //Для перевода температуры из шкалы Ньютона в шкалу Реомюра  нужно воспользоваться формулой  [°Re]=[°N]*80/33
        return TEMPERATURE;
}

// <Ньютона> ---> <Кельвина> //
double NewtonsTOKelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 100/33) + 273.15; //Для перевода температуры из шкалы Ньютона в шкалу Кельвина  нужно воспользоваться формулой  [°K]=[°N]*100/33+273.15
        return TEMPERATURE;
}

// <Ньютона> ---> <Фаренгейт> //
double NewtonsTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 60/11) + 32; //Для перевода температуры из шкалы Ньютона в шкалу Фаренгейта  нужно воспользоваться формулой [°F]=[°N]*60/11+32
        return TEMPERATURE;
}

// <Ньютона> ---> <Цельсий> //
double NewtonsTOCelsius(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 100/33; //Для перевода температуры из шкалы Ньютона в шкалу Фаренгейта  нужно воспользоваться формулой [°C]=[°N]*100/33
        return TEMPERATURE;
}

// <Ньютона> ---> <Рёмера> //
double NewtonsTORomers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE * 35/22) + 7.5; //Для перевода температуры из шкалы Ньютона в шкалу Рёмера  нужно воспользоваться формулой 	[°Ro]=[°N]*35/22+7.5 !!!! Уточнить !!!!!
        return TEMPERATURE;
}

// <Ньютона> ---> <Делисле> //
double NewtonsTODelisles(double TEMPERATURE) {
	TEMPERATURE = (33 - TEMPERATURE ) * 50/11; //Для перевода температуры из шкалы Ньютона в шкалу Делисле   нужно воспользоваться формулой  [°De]=(33-[°N])*50/11 !!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Рёмера и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Рёмера> ---> <Ньютона> //
double RomersTONewtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5) * 22/35; //Для перевода температуры из шкалы Рёмера в шкалу Ньютона   нужно воспользоваться формулой  [°N]=([°Ro]-7.5)*22/35 !!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Рёмера> ---> <Ранкина> //
double RomersTORankines(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5 * 24/7) + 491.67; //Для перевода температуры из шкалы Рёмера в шкалу Ранкина   нужно воспользоваться формулой [°R]=([°Ro]-7.5)*24/7+491.67!!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Рёмера> ---> <Реомюра> //
double RomersTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5) * 32/21; //Для перевода температуры из шкалы Рёмера в шкалу Реомюра   нужно воспользоваться формулой 	[°Re]=([°Ro]-7.5)*32/21 Нужно уточнить !!!!
        return TEMPERATURE;
}


// <Рёмера> ---> <Кельвина> //
double RomersTOKelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5 * 40/21) + 273.15; //Для перевода температуры из шкалы Рёмера в шкалу Кельвина   нужно воспользоваться формулой [°K]=([°Ro]-7.5)*40/21+273.15 Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Рёмера> ---> <Фаренгейт> //
double RomersTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5 * 24/7) + 32; //Для перевода температуры из шкалы Рёмера в шкалу Фаренгейта   нужно воспользоваться формулой [°F]=([°Ro]-7.5)*24/7+32 !!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Рёмера> ---> <Цельсий> //
double RomersTOCelsius(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5 * 40/21); //Для перевода температуры из шкалы Рёмера в шкалу Цельсий   нужно воспользоваться формулой [°C]=([°Ro]-7.5)*40/21	!!!! Нужно уточнить !!!!
         return TEMPERATURE;
}

// <Рёмера> ---> <Делисле> //
double RomersTODelisles(double TEMPERATURE) {
	TEMPERATURE = (60 - TEMPERATURE) * 20/7; //Для перевода температуры из шкалы Рёмера в шкалу Делисле    нужно воспользоваться формулой [°De]=(60-[°Ro])*20/7	!!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Делисле и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Делисле> ---> <Рёмера> //
double DelislesTORomers(double TEMPERATURE) {
	TEMPERATURE = (60 - TEMPERATURE) * 7/20; //Для перевода температуры из шкалы Делисле в шкалу Рёмера    нужно воспользоваться формулой [°Ro]=60-[°De]*7/20	!!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Делисле> ---> <Ньютона> //
double DelislesTONewtons(double TEMPERATURE) {
	TEMPERATURE = (33 - TEMPERATURE) * 11/50; //Для перевода температуры из шкалы Делисле в шкалу Ньютона    нужно воспользоваться формулой [°N]=33-[°De]*11/50	!!!! Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Делисле> ---> <Ранкина> //
double DelislesTORankines(double TEMPERATURE) {
	TEMPERATURE = (671.67 - TEMPERATURE) * 6/5; //Для перевода температуры из шкалы Делисле в шкалу Ранкина    нужно воспользоваться формулой 	[°R]=671.67-[°De]*6/5
        return TEMPERATURE;
}

// <Делисле> ---> <Реомюра> //
double DelislesTOReaumurs(double TEMPERATURE) {
	TEMPERATURE = (80 - TEMPERATURE) * 8/15; //Для перевода температуры из шкалы Делисле в шкалу Реомюра    нужно воспользоваться формулой  [°Re]=80-[°De]*8/15
       return TEMPERATURE;
}

// <Делисле> ---> <Кельвин> //
double DelislesTOKelvins(double TEMPERATURE) {
	TEMPERATURE = (373.15 - TEMPERATURE) * 2/3; //Для перевода температуры из шкалы Делисле в шкалу Кельвина   нужно воспользоваться формулой  [°K]=373.15-[°De]*2/3
        return TEMPERATURE;
}

// <Делисле> ---> <Фаренгейт> //
double DelislesTOFahrenheits(double TEMPERATURE) {
	TEMPERATURE = (212 - TEMPERATURE) * 6/5; //Для перевода температуры из шкалы Делисле в шкалу Фаренгейта   нужно воспользоваться формулой  [°F]=212-[°De]*6/5
        return TEMPERATURE;
}

// <Делисле> ---> <Цельсий> //
double DelislesTOCelsius(double TEMPERATURE) {
	TEMPERATURE = (100 - TEMPERATURE) * 2/3; //Для перевода температуры из шкалы Делисле в шкалу Фаренгейта   нужно воспользоваться формулой  [°C]=100-[°De]*2/3
       return TEMPERATURE;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
