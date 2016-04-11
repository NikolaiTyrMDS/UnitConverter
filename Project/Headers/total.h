typedef struct entered_and_gated_parameters {
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
double transfer(char *MEASUREMENT);

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
