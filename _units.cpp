#include <pybind11/pybind11.h>
#include "units.hpp"

namespace units {
    void bind_units(pybind11::module& m){
        namespace py = pybind11;

        m.attr("me") = py::float_(me);
        m.attr("clight") = py::float_(clight);
        m.attr("me_c2") = py::float_(me_c2);

        m.attr("k_boltz") = py::float_(k_boltz);

        m.attr("sigma_sb") = py::float_(sigma_sb);
        m.attr("arad") = py::float_(arad);

        m.attr("sigma_thomson") = py::float_(sigma_thomson);

        m.attr("ev") = py::float_(ev);
        m.attr("kev") = py::float_(kev);
        m.attr("ev_kelvin") = py::float_(ev_kelvin);
        m.attr("kev_kelvin") = py::float_(kev_kelvin);
        
        m.attr("Navogadro") = py::float_(Navogadro);

        m.attr("planck_constant") = py::float_(planck_constant);
    }
} 

PYBIND11_MODULE(_units, m){
    m.doc() = "units c++ module";
    units::bind_units(m);
}

