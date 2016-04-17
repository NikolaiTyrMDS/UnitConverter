﻿typedef struct entered_and_gated_parameters {
    double result, VOLUME;
    float version;
    int like_to_continue, measurement_id;
    char MEASUREMENT[261];
} MainParameters;
// ÈÇÌÅÍÅÍÈÅ ÏÀÐÀÌÅÒÐÎÂ ÎÏÀÑÍÎ ÄËß ÆÈÇÍÈ!;

typedef struct working_values {
    double gate;
    int input_choice, id, output_choice;
} FunctionsParameters;
// ÈÇÌÅÍÅÍÈÅ ÏÀÐÀÌÅÒÐÎÂ ÎÏÀÑÍÎ ÄËß ÆÈÇÍÈ!;

// Ñëóæåáíûå ôóíêöèè;
double parsing(char *MEASUREMENT);
void convert(double RESULT);

// Ïðîòîòèïû ðàáî÷èõ ôóíêöèé;
double adjacentValuesUpward(double DATA);
double adjacentValuesToDecrease(double DATA);
double valuesBetweenOneUpward(double DATA);
double valuesBetweenOneToDecrease(double DATA);
double valuesBetweenTwoUpward(double DATA);
double valuesBetweenTwoToDecrease(double DATA);
double valuesBetweenThreeUpward(double DATA);
double valuesBetweenThreeToDecrease(double DATA);
double valuesBetweenFourUpward(double DATA);
double valuesBetweenFourToDecrease(double DATA);
double valuesBetweenFiveUpward(double DATA);
double valuesBetweenFiveToDecrease(double DATA);
double valuesBetweenSixUpward(double DATA);
double valuesBetweenSixToDecrease(double DATA);
double bitsTobytes(double DATA);
double bytesTobits(double DATA);
double bitsTokilobytes(double DATA);
double kilobytesTobits(double DATA);
double bitsTomegabytes(double DATA);
double megabytesTobits(double DATA);
double bitsTogigabytes(double DATA);
double gigabytesTobits(double DATA);
double bitsToterabytes(double DATA);
double terabytesTobits(double DATA);
double bitsTopetabytes(double DATA);
double petabytesTobits(double DATA);
double bitsToexabytes(double DATA);
double exabytesTobits(double DATA);
double bitsTozetabytes(double DATA);
double zetabytesTobits(double DATA);

// Прототипы для температуры;
double CelsiusTOFahrenheits(double TEMPERATURE);
double CelsiusTOKelvins(double TEMPERATURE);
double CelsiusTOReaumurs(double TEMPERATURE);
double CelsiusTORankines(double TEMPERATURE);
double CelsiusTONewtons(double TEMPERATURE);
double CelsiusTORomers(double TEMPERATURE);
double CelsiusTODelisles(double TEMPERATURE);
double FahrenheitsTOCelsiuss(double TEMPERATURE);
double FahrenheitsTOKelvins(double TEMPERATURE);
double FahrenheitsTOReaumurs(double TEMPERATURE);
double FahrenheitsTORankines(double TEMPERATURE);
double FahrenheitsTONewtons(double TEMPERATURE);
double FahrenheitsTORomers(double TEMPERATURE);
double FahrenheitsTODelisles(double TEMPERATURE);
double KelvinsTOFahrenheits(double TEMPERATURE);
double KelvinsTOCelsius(double TEMPERATURE);
double KelvinsTOReaumurs(double TEMPERATURE);
double KelvinsTORankines(double TEMPERATURE);
double KelvinsTONewtons(double TEMPERATURE);
double KelvinsTORomers(double TEMPERATURE);
double KelvinsTODelisles(double TEMPERATURE);
double ReaumursTOKelvins(double TEMPERATURE);
double ReaumursTOFahrenheits(double TEMPERATURE);
double ReaumursTOCelsius(double TEMPERATURE);
double ReaumursTORankines(double TEMPERATURE);
double ReaumursTONewtons(double TEMPERATURE);
double ReaumursTORomers(double TEMPERATURE);
double ReaumursTODelisles(double TEMPERATURE);
double RankinesTOReaumurs(double TEMPERATURE);
double RankinesTOKelvins(double TEMPERATURE);
double RankinesTOFahrenheits(double TEMPERATURE);
double RankinesTOCelsius(double TEMPERATURE);
double RankinesTONewtons(double TEMPERATURE);
double RankinesTORomers(double TEMPERATURE);
double RankinesTODelisles(double TEMPERATURE);
double NewtonsTORankines(double TEMPERATURE);
double NewtonsTOReaumurs(double TEMPERATURE);
double NewtonsTOKelvins(double TEMPERATURE);
double NewtonsTOFahrenheits(double TEMPERATURE);
double NewtonsTOCelsius(double TEMPERATURE);
double NewtonsTORomers(double TEMPERATURE);
double NewtonsTODelisles(double TEMPERATURE);
double RomersTONewtons(double TEMPERATURE);
double RomersTORankines(double TEMPERATURE);
double RomersTOReaumurs(double TEMPERATURE);
double RomersTOKelvins(double TEMPERATURE);
double RomersTOFahrenheits(double TEMPERATURE);
double RomersTOCelsius(double TEMPERATURE);
double RomersTODelisles(double TEMPERATURE);
double DelislesTORomers(double TEMPERATURE);
double DelislesTONewtons(double TEMPERATURE);
double DelislesTORankines(double TEMPERATURE);
double DelislesTOReaumurs(double TEMPERATURE);
double DelislesTOKelvins(double TEMPERATURE);
double DelislesTOFahrenheits(double TEMPERATURE);
double DelislesTOCelsius(double TEMPERATURE);

// Ïðîòîòèïû êîíñòðóêöèé switch;
double selectionswitchData(double MEASUREMENT);
double selectionswitchTemperature(double MEASUREMENT);
double selectionswitchTime(double MEASUREMENT);
double selectionswitchAngle(double MEASUREMENT);
double selectionswitchFrequency(double MEASUREMENT);
double selectionswitchQuantityOfSubstance(double MEASUREMENT);
double selectionswitchPower(double MEASUREMENT);

// прототипы функций конвентирования различных величин УГЛА
double Degree2Radian(double ANGLE);
double Radian2Degree(double ANGLE);
double Degree2Min(double ANGLE);
double Min2Degree(double ANGLE);
double Radian2Min(double ANGLE);
double Min2Radian(double ANGLE);
double Degree2Sec(double ANGLE);
double Sec2Degree(double ANGLE);
double Radian2Sec(double ANGLE);
double Sec2Radian(double ANGLE);
double Min2Sec(double ANGLE);
double Sec2Min(double ANGLE);
double Degree2Grad(double ANGLE);
double Grad2Degree(double ANGLE);
double Min2Grad(double ANGLE);
double Grad2Min(double ANGLE);
double Sec2Grad(double ANGLE);
double Grad2Sec(double ANGLE);
double Radian2Grad(double ANGLE);
double Grad2Radian(double ANGLE);
double Sextant2Degree(double ANGLE);
double Degree2Sextant(double ANGLE);
double Sextant2Min(double ANGLE);
double Min2Sextant(double ANGLE);
double Sextant2Sec(double ANGLE);
double Sec2Sextant(double ANGLE);
double Sextant2Grad(double ANGLE);
double Grad2Sextant(double ANGLE);
double Sextant2Radian(double ANGLE);
double Radian2Sextant(double ANGLE);
double Rumb2Degree(double ANGLE);
double Degree2Rumb(double ANGLE);
double Rumb2Radian(double ANGLE);
double Radian2Rumb(double ANGLE);
double Rumb2Min(double ANGLE);
double Min2Rumb(double ANGLE);
double Rumb2Sec(double ANGLE);
double Sec2Rumb(double ANGLE);
double Rumb2Grad(double ANGLE);
double Grad2Rumb(double ANGLE);
double Rumb2Sextant(double ANGLE);
double Sextant2Rumb(double ANGLE);

// прототипы функций конвентирования различных величин ЧАСТОТЫ
double Herz2kHerz(double FREQUENCY);
double kHerz2Herz(double FREQUENCY);
double Herz2MlHerz(double FREQUENCY);
double MlHerz2Herz(double FREQUENCY);
double kHerz2MlHerz(double FREQUENCY);
double MlHerz2kHerz(double FREQUENCY);
double Herz2MkHerz(double FREQUENCY);
double MkHerz2Herz(double FREQUENCY);
double kHerz2MkHerz(double FREQUENCY);
double MkHerz2kHerz(double FREQUENCY);
double MkHerz2MlHerz(double FREQUENCY);
double MlHerz2MkHerz(double FREQUENCY);
double Herz2MgHerz(double FREQUENCY);
double MgHerz2Herz(double FREQUENCY);
double MlHerz2MgHerz(double FREQUENCY);
double MgHerz2MlHerz(double FREQUENCY);
double kHerz2MgHerz(double FREQUENCY);
double MgHerz2kHerz(double FREQUENCY);
double MkHerz2MgHerz(double FREQUENCY);
double MgHerz2MkHerz(double FREQUENCY);
double Herz2Frenel(double FREQUENCY);
double Frenel2Herz(double FREQUENCY);
double MlHerz2Frenel(double FREQUENCY);
double Frenel2MlHerz(double FREQUENCY);
double MkHerz2Frenel(double FREQUENCY);
double Frenel2MkHerz(double FREQUENCY);
double kHerz2Frenel(double FREQUENCY);
double Frenel2kHerz(double FREQUENCY);
double MgHerz2Frenel(double FREQUENCY);
double Frenel2MgHerz(double FREQUENCY);
double Herz2RadSec(double FREQUENCY);
double RadSec2Herz(double FREQUENCY);
double MlHerz2RadSec(double FREQUENCY);
double RadSec2MlHerz(double FREQUENCY);
double MkHerz2RadSec(double FREQUENCY);
double RadSec2MkHerz(double FREQUENCY);
double kHerz2RadSec(double FREQUENCY);
double RadSec2kHerz(double FREQUENCY);
double MgHerz2RadSec(double FREQUENCY);
double RadSec2MgHerz(double FREQUENCY);
double Frenel2RadSec(double FREQUENCY);
double RadSec2Frenel(double FREQUENCY);

// прототипы функций конвентирования различных величин МОЩНОСТИ
double Vat2kVat(double POWER);
double kVat2Vat(double POWER);
double Vat2mVat(double POWER);
double mVat2Vat(double POWER);
double kVat2mVat(double POWER);
double mVat2kVat(double POWER);
double kgSilaMvS2Vat(double POWER);
double Vat2kgSilaMvS(double POWER);
double kgSilaMvS2kVat(double POWER);
double kVat2kgSilaMvS(double POWER);
double kgSilaMvS2mVat(double POWER);
double mVat2kgSilaMvS(double POWER);
double Vat2ErgS(double POWER);
double ErgS2Vat(double POWER);
double kVat2ErgS(double POWER);
double ErgS2kVat(double POWER);
double mVat2ErgS(double POWER);
double ErgS2mVat(double POWER);
double kgSilaMvS2ErgS(double POWER);
double ErgS2kgSilaMvS(double POWER);
double Vat2HorsePowMetr(double POWER);
double HorsePowMetr2Vat(double POWER);
double kVat2HorsePowMetr(double POWER);
double HorsePowMetr2kVat(double POWER);
double mVat2HorsePowMetr(double POWER);
double HorsePowMetr2mVat(double POWER);
double kgSilaMvS2HorsePowMetr(double POWER);
double HorsePowMetr2kgSilaMvS(double POWER);
double ErgS2HorsePowMetr(double POWER);
double HorsePowMetr2ErgS(double POWER);
double Vat2HorsePowEng(double POWER);
double HorsePowEng2Vat(double POWER);
double kVat2HorsePowEng(double POWER);
double HorsePowEng2kVat(double POWER);
double mVat2HorsePowEng(double POWER);
double HorsePowEng2mVat(double POWER);
double kgSilaMvS2HorsePowEng(double POWER);
double HorsePowEng2kgSilaMvS(double POWER);
double ErgS2HorsePowEng(double POWER);
double HorsePowEng2ErgS(double POWER);
double HorsePowMetr2HorsePowEng(double POWER);
double HorsePowEng2HorsePowMetr(double POWER);
double Vat2MlVat(double POWER);
double MlVat2Vat(double POWER);
double kVat2MlVat(double POWER);
double MlVat2kVat(double POWER);
double mVat2MlVat(double POWER);
double MlVat2mVat(double POWER);
double MlVat2kgSilaMvS(double POWER);
double kgSilaMvS2MlVat(double POWER);
double MlVat2ErgS(double POWER);
double ErgS2MlVat(double POWER);
double MlVat2HorsePowMetr(double POWER);
double HorsePowMetr2MlVat(double POWER);
double MlVat2HorsePowEng(double POWER);
double HorsePowEng2MlVat(double POWER);
double MlVat2MkVat(double POWER);
double MkVat2MlVat(double POWER);
double Vat2MkVat(double POWER);
double MkVat2Vat(double POWER);
double kVat2MkVat(double POWER);
double MkVat2kVat(double POWER);
double mVat2MkVat(double POWER);
double MkVat2mVat(double POWER);
double MkVat2kgSilaMvS(double POWER);
double kgSilaMvS2MkVat(double POWER);
double MkVat2ErgS(double POWER);
double ErgS2MkVat(double POWER);
double MkVat2HorsePowMetr(double POWER);
double HorsePowMetr2MkVat(double POWER);
double MkVat2HorsePowEng(double POWER);
double HorsePowEng2MkVat(double POWER);

// прототипы функций конвентирования различных величин КОЛИЧЕСТВА ВЕЩЕСТВА
double Mole2mMole(double QOS);
double mMole2Mole(double QOS);
double Mole2kMole(double QOS);
double kMole2Mole(double QOS);
double mMole2kMole(double QOS);
double kMole2mMole(double QOS);
double Mole2PoundMole(double QOS);
double PoundMole2Mole(double QOS);
double mMole2PoundMole(double QOS);
double PoundMole2mMole(double QOS);
double kMole2PoundMole(double QOS);
double PoundMole2kMole(double QOS);
double Mole2MkMole(double QOS);
double MkMole2Mole(double QOS);
double kMole2MkMole(double QOS);
double MkMole2kMole(double QOS);
double mMole2MkMole(double QOS);
double MkMole2mMole(double QOS);
double PoundMole2MkMole(double QOS);
double MkMole2PoundMole(double QOS);
double Mole2MgMole(double QOS);
double MgMole2Mole(double QOS);
double kMole2MgMole(double QOS);
double MgMole2kMole(double QOS);
double mMole2MgMole(double QOS);
double MgMole2mMole(double QOS);
double MkMole2MgMole(double QOS);
double MgMole2MkMole(double QOS);
double PoundMole2MgMole(double QOS);
double MgMole2PoundMole(double QOS);

//прототип функций конвентирования различных величин массы
//Единица измерения Грамм и её перевод
double Grams_TO_Kilograms(double MASS);
double Grams_TO_Quintals(double MASS);
double Grams_TO_Tonnes(double MASS);
double Grams_TO_Carats(double MASS);
double Grams_TO_Stones(double MASS);
double Grams_TO_Funts(double MASS);
double Grams_TO_Ounces(double MASS);
double Grams_TO_Drachmas(double MASS);
double Grams_TO_Grains(double MASS);
//Единица измерения Центнер и её перевод
double Quintals_TO_Kilograms(double MASS);
double Quintals_TO_Grams(double MASS);
double Quintals_TO_Tonnes(double MASS);
double Quintals_TO_Carats(double MASS);
double Quintals_TO_Stones(double MASS);
double Quintals_TO_Funts(double MASS);
double Quintals_TO_Ounces(double MASS);
double Quintals_TO_Drachmas(double MASS);
double Quintals_TO_Grains(double MASS);
//Единица измерения Тонна и её перевод
double Tonnes_TO_Quintals(double MASS);
double Tonnes_TO_Kilograms(double MASS);
double Tonnes_TO_Grams(double MASS);
double Tonnes_TO_Carats(double MASS);
double Tonnes_TO_Stones(double MASS);
double Tonnes_TO_Funts(double MASS);
double Tonnes_TO_Ounces(double MASS);
double Tonnes_TO_Drachmas(double MASS);
double Tonnes_TO_Grains(double MASS);
//Единица измерения Карат и её перевод
double Carats_TO_Tonnes(double MASS);
double Carats_TO_Quintals(double MASS);
double Carats_TO_Kilograms(double MASS);
double Carats_TO_Grams(double MASS);
double Carats_TO_Stones(double MASS);
double Carats_TO_Funts(double MASS);
double Carats_TO_Ounces(double MASS);
double Carats_TO_Drachmas(double MASS);
double Carats_TO_Grains(double MASS);
//Единица измерения Стоун и её перевод
double Stones_TO_Carats(double MASS);
double Stones_TO_Tonnes(double MASS);
double Stones_TO_Quintals(double MASS);
double Stones_TO_Kilograms(double MASS);
double Stones_TO_Grams(double MASS);
double Stones_TO_Funts(double MASS);
double Stones_TO_Ounces(double MASS);
double Stones_TO_Drachmas(double MASS);
double Stones_TO_Grains(double MASS);
//Единица измерения Фунт и её перевод
double Funts_TO_Stones(double MASS);
double Funts_TO_Carats(double MASS);
double Funts_TO_Tonnes(double MASS);
double Funts_TO_Quintals(double MASS);
double Funts_TO_Kilograms(double MASS);
double Funts_TO_Grams(double MASS);
double Funts_TO_Ounces(double MASS);
double Funts_TO_Drachmas(double MASS);
double Funts_TO_Grains(double MASS);
//Единица измерения Унция и её перевод
double Ounces_TO_Funts(double MASS);
double Ounces_TO_Stones(double MASS);
double Ounces_TO_Carats(double MASS);
double Ounces_TO_Tonnes(double MASS);
double Ounces_TO_Quintals(double MASS);
double Ounces_TO_Kilograms(double MASS);
double Ounces_TO_Grams(double MASS);
double Ounces_TO_Drachmas(double MASS);
double Ounces_TO_Grains(double MASS);
//Единица измерения Драхма и её перевод
double Drachmas_TO_Ounces(double MASS);
double Drachmas_TO_Funts(double MASS);
double Drachmas_TO_Stones(double MASS);
double Drachmas_TO_Carats(double MASS);
double Drachmas_TO_Tonnes(double MASS);
double Drachmas_TO_Quintals(double MASS);
double Drachmas_TO_Kilograms(double MASS);
double Drachmas_TO_Grams(double MASS);
double Drachmas_TO_Grains(double MASS);
//Единица измерения Гран и её перевод
double Grains_TO_Drachmas(double MASS);
double Grains_TO_Ounces(double MASS);
double Grains_TO_Funts(double MASS);
double Grains_TO_Stones(double MASS);
double Grains_TO_Carats(double MASS);
double Grains_TO_Tonnes(double MASS);
double Grains_TO_Quintals(double MASS);
double Grains_TO_Kilograms(double MASS);
double Grains_TO_Grams(double MASS);

//TIME
long double nsec_to_sec (long double TIME);
long double nsec_to_msec (long double TIME);
long double nsec_to_mksec (long double TIME);
long double nsec_to_sec (long double TIME);
long double nsec_to_min (long double TIME);
long double nsec_to_chas (long double TIME);
long double nsec_to_sut (long double TIME);
long double nsec_to_week (long double TIME);
long double nsec_to_year (long double TIME);
long double nsec_to_vek (long double TIME);


long double mksec_to_sec (long double TIME);
long double mksec_to_nsec (long double TIME);
long double mksec_to_msec (long double TIME);
long double mksec_to_min (long double TIME);
long double mksec_to_chas (long double TIME);
long double mksec_to_sut (long double TIME);
long double mksec_to_week (long double TIME);
long double mksec_to_year (long double TIME);
long double mksec_to_vek (long double TIME);

long double msec_to_sec (long double TIME);
long double msec_to_nsec (long double TIME);
long double msec_to_mksec (long double TIME);
long double msec_to_min (long double TIME);
long double msec_to_chas (long double TIME);
long double msec_to_sut (long double TIME);
long double msec_to_week (long double TIME);
long double msec_to_year (long double TIME);
long double msec_to_vek (long double TIME);

long double sec_to_nsec (long double TIME);
long double sec_to_mksec (long double TIME);
long double sec_to_msec (long double TIME);
long double sec_to_min (long double TIME);
long double sec_to_chas (long double TIME);
long double sec_to_sut (long double TIME);
long double sec_to_week (long double TIME);
long double sec_to_year (long double TIME);
long double sec_to_vek (long double TIME);

long double min_to_nsec (long double TIME);
long double min_to_mksec (long double TIME);
long double min_to_msec (long double TIME);
long double min_to_sec (long double TIME);
long double min_to_chas (long double TIME);
long double min_to_sut (long double TIME);
long double min_to_week (long double TIME);
long double min_to_year (long double TIME);
long double min_to_vek (long double TIME);

long double chas_to_nsec (long double TIME);
long double chas_to_mksec (long double TIME);
long double chas_to_msec (long double TIME);
long double chas_to_sec (long double TIME);
long double chas_to_min (long double TIME);
long double chas_to_sut (long double TIME);
long double chas_to_week (long double TIME);
long double chas_to_year (long double TIME);
long double chas_to_vek (long double TIME);

long double sut_to_nsec (long double TIME);
long double sut_to_mksec (long double TIME);
long double sut_to_msec (long double TIME);
long double sut_to_sec (long double TIME);
long double sut_to_min (long double TIME);
long double sut_to_chas (long double TIME);
long double sut_to_week (long double TIME);
long double sut_to_year (long double TIME);
long double sut_to_vek (long double TIME);

long double week_to_nsec (long double TIME);
long double week_to_mksec (long double TIME);
long double week_to_msec (long double TIME);
long double week_to_sec (long double TIME);
long double week_to_min (long double TIME);
long double week_to_sut (long double TIME);
long double week_to_chas (long double TIME);
long double week_to_year (long double TIME);
long double week_to_vek (long double TIME);

long double year_to_nsec (long double TIME);
long double year_to_mksec (long double TIME);
long double year_to_msec (long double TIME);
long double year_to_sec (long double TIME);
long double year_to_min (long double TIME);
long double year_to_sut (long double TIME);
long double year_to_chas (long double TIME);
long double year_to_week (long double TIME);
long double year_to_vek (long double TIME);

long double vek_to_nsec (long double TIME);
long double vek_to_mksec (long double TIME);
long double vek_to_msec (long double TIME);
long double vek_to_sec (long double TIME);
long double vek_to_min (long double TIME);
long double vek_to_sut (long double TIME);
long double vek_to_chas (long double TIME);
long double vek_to_week (long double TIME);
long double vek_to_year (long double TIME);

//прототип функций конвентирования различных величин объема
//Единица измерения Кубический километр и её перевод 
double squaredkilometers_TO_squaredmeters(double AMOUNT);
double squaredkilometers_TO_squareddecimeters(double AMOUNT);
double squaredkilometers_TO_squaredcentimeters(double AMOUNT);
double squaredkilometers_TO_squaredmillimeters(double AMOUNT);
double squaredkilometers_TO_liters(double AMOUNT);
double squaredkilometers_TO_mililiters(double AMOUNT);
double squaredkilometers_TO_gallons(double AMOUNT);
double squaredkilometers_TO_barrels(double AMOUNT);
double squaredkilometers_TO_quarts(double AMOUNT);
double squaredkilometers_TO_pints(double AMOUNT);
double squaredkilometers_TO_flozs(double AMOUNT);
//Единица измерения Кубический метр и её перевод
double squaredmeters_TO_squaredkilometers(double AMOUNT);
double squaredmeters_TO_squareddecimeters(double AMOUNT);
double squaredmeters_TO_squaredcentimeters(double AMOUNT);
double squaredmeters_TO_squaredmillimeters(double AMOUNT);
double squaredmeters_TO_liters(double AMOUNT);
double squaredmeters_TO_mililiters(double AMOUNT);
double squaredmeters_TO_gallons(double AMOUNT);
double squaredmeters_TO_barrels(double AMOUNT);
double squaredmeters_TO_pints(double AMOUNT);
double squaredmeters_TO_quarts(double AMOUNT);
double squaredmeters_TO_flozs(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squareddecimeters_TO_squaredmeters(double AMOUNT);
double squareddecimeters_TO_squaredkilometers(double AMOUNT);
double squareddecimeters_TO_squaredcentimeters(double AMOUNT);
double squareddecimeters_TO_squaredmillimeters(double AMOUNT);
double squareddecimeters_TO_liters(double AMOUNT);
double squareddecimeters_TO_mililiters(double AMOUNT);
double squareddecimeters_TO_gallons(double AMOUNT);
double squareddecimeters_TO_barrels(double AMOUNT);
double squareddecimeters_TO_pints(double AMOUNT);
double squareddecimeters_TO_quarts(double AMOUNT);
double squareddecimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squaredcentimeters_TO_squareddecimeters(double AMOUNT);
double squaredcentimeters_TO_squaredmeters(double AMOUNT);
double squaredcentimeters_TO_squaredkilometers(double AMOUNT);
double squaredcentimeters_TO_squaredmillimeters(double AMOUNT);
double squaredcentimeters_TO_liters(double AMOUNT);
double squaredcentimeters_TO_mililiters(double AMOUNT);
double squaredcentimeters_TO_gallons(double AMOUNT);
double squaredcentimeters_TO_barrels(double AMOUNT);
double squaredcentimeters_TO_pints(double AMOUNT);
double squaredcentimeters_TO_quarts(double AMOUNT);
double squaredcentimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double squaredmillimeters_TO_squaredcentimeters(double AMOUNT);
double squaredmillimeters_TO_squareddecimeters(double AMOUNT);
double squaredmillimeters_TO_squaredmeters(double AMOUNT);
double squaredmillimeters_TO_squaredkilometers(double AMOUNT);
double squaredmillimeters_TO_liters(double AMOUNT);
double squaredmillimeters_TO_mililiters(double AMOUNT);
double squaredmillimeters_TO_gallons(double AMOUNT);
double squaredmillimeters_TO_barrels(double AMOUNT);
double squaredmillimeters_TO_pints(double AMOUNT);
double squaredmillimeters_TO_quarts(double AMOUNT);
double squaredmillimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double liters_TO_squaredmillimeters(double AMOUNT);
double liters_TO_squaredcentimeters(double AMOUNT);
double liters_TO_squareddecimeters(double AMOUNT);
double liters_TO_squaredmeters(double AMOUNT);
double liters_TO_squaredkilometers(double AMOUNT);
double liters_TO_mililiters(double AMOUNT);
double liters_TO_gallons(double AMOUNT);
double liters_TO_barrels(double AMOUNT);
double liters_TO_quarts(double AMOUNT);
double liters_TO_pints(double AMOUNT);
double liters_TO_flozs(double AMOUNT);
//Единица измерения миллитр её перевод
double mililiters_TO_liters(double AMOUNT);
double mililiters_TO_squaredmillimeters(double AMOUNT);
double mililiters_TO_squaredcentimeters(double AMOUNT);
double mililiters_TO_squareddecimeters(double AMOUNT);
double mililiters_TO_squaredmeters(double AMOUNT);
double mililiters_TO_squaredkilometers(double AMOUNT);
double mililiters_TO_gallons(double AMOUNT);
double mililiters_TO_barrels(double AMOUNT);
double mililiters_TO_quarts(double AMOUNT);
double mililiters_TO_pints(double AMOUNT);
double mililiters_TO_flozs(double AMOUNT);
//Единица измерения галлон её перевод
double gallons_TO_mililiters(double AMOUNT);
double gallons_TO_liters(double AMOUNT);
double gallons_TO_squaredmillimeters(double AMOUNT);
double gallons_TO_squaredcentimeters(double AMOUNT);
double gallons_TO_squareddecimeters(double AMOUNT);
double gallons_TO_squaredmeters(double AMOUNT);
double gallons_TO_squaredkilometers(double AMOUNT);
double gallons_TO_barrels(double AMOUNT);
double gallons_TO_quarts(double AMOUNT);
double gallons_TO_pints(double AMOUNT);
double gallons_TO_flozs(double AMOUNT);
//Единица измерения баррель (нефтяной) её перевод
double barrels_TO_gallons(double AMOUNT);
double barrels_TO_mililiters(double AMOUNT);
double barrels_TO_liters(double AMOUNT);
double barrels_TO_squaredmillimeters(double AMOUNT);
double barrels_TO_squaredcentimeters(double AMOUNT);
double barrels_TO_squareddecimeters(double AMOUNT);
double barrels_TO_squaredmeters(double AMOUNT);
double barrels_TO_squaredkilometers(double AMOUNT);
double barrels_TO_quarts(double AMOUNT);
double barrels_TO_pints(double AMOUNT);
double barrels_TO_flozs(double AMOUNT);
//Единица измерения кварта  её перевод
double quarts_TO_barrels(double AMOUNT);
double quarts_TO_gallons(double AMOUNT);
double quarts_TO_mililiters(double AMOUNT);
double quarts_TO_liters(double AMOUNT);
double quarts_TO_squaredmillimeters(double AMOUNT);
double quarts_TO_squaredcentimeters(double AMOUNT);
double quarts_TO_squareddecimeters(double AMOUNT);
double quarts_TO_squaredmeters(double AMOUNT);
double quarts_TO_squaredkilometers(double AMOUNT);
double quarts_TO_pints(double AMOUNT);
double quarts_TO_flozs(double AMOUNT);
//Единица измерения пинта  её перевод
double pints_TO_quarts(double AMOUNT);
double pints_TO_barrels(double AMOUNT);
double pints_TO_gallons(double AMOUNT);
double pints_TO_mililiters(double AMOUNT);
double pints_TO_liters(double AMOUNT);
double pints_TO_squaredmillimeters(double AMOUNT);
double pints_TO_squaredcentimeters(double AMOUNT);
double pints_TO_squareddecimeters(double AMOUNT);
double pints_TO_squaredmeters(double AMOUNT);
double pints_TO_squaredkilometers(double AMOUNT);
double pints_TO_flozs(double AMOUNT);
//Единица жидкая унция  её перевод
double flozs_TO_pints(double AMOUNT);
double flozs_TO_quarts(double AMOUNT);
double flozs_TO_barrels(double AMOUNT);
double flozs_TO_gallons(double AMOUNT);
double flozs_TO_mililiters(double AMOUNT);
double flozs_TO_liters(double AMOUNT);
double flozs_TO_squaredmillimeters(double AMOUNT);
double flozs_TO_squaredmillimeters(double AMOUNT);
double flozs_TO_squareddecimeters(double AMOUNT);
double flozs_TO_squaredmeters(double AMOUNT);
double flozs_TO_squaredkilometers(double AMOUNT);
