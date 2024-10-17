#ifndef UNITS
#define UNITS

// Everything is in cgs
namespace units {
static constexpr double me = 9.109383713928e-28; // [gr] electron mass
static constexpr double clight = 2.99792458000e10 ; // [cm/s] speed of light
static constexpr double me_c2 = me*clight*clight; // [gr*cm^2/s^2] electron rest energy


static constexpr double k_boltz = 1.380649e-16; // [gr * cm^2 / s^2 / K] boltzmann constant

static constexpr double sigma_sb = 5.670374419e-5; // [erg*cm^-2*sec^-1*K^-4] Stephan Boltzmann cosntant
static constexpr double arad = 4.0*sigma_sb/clight; // [erg*cm^-3**K^-4] Radiation cosntant


static constexpr double sigma_thomson = 6.652458732160e-25; // [cm^2]

static constexpr double ev = 1.602176634e-12;
static constexpr double kev = 1e3*ev;
static constexpr double ev_kelvin = ev/k_boltz;
static constexpr double kev_kelvin = ev_kelvin*1e3;

static constexpr double Navogadro = 6.02214076e23;

static constexpr double planck_constant = 6.62607015e-27;
}
#endif