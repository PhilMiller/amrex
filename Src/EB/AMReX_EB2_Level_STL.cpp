#include <AMReX_EB2_Level_STL.H>

namespace amrex { namespace EB2 {

STLLevel::STLLevel (IndexSpace const* is, STLtools const& stl_tools, const Geometry& geom,
                    int max_grid_size, int ngrow, bool extend_domain_face)
    : GShopLevel<STLtools>(is, geom)
{
    BL_PROFILE("EB2::STLLevel()-fine");

    define_fine(stl_tools, geom, max_grid_size, ngrow, extend_domain_face);
}

STLLevel::STLLevel (IndexSpace const* is, int ilev, int max_grid_size, int ngrow,
                    const Geometry& geom, STLLevel& fineLevel)
    : GShopLevel<STLtools>(is, ilev, max_grid_size, ngrow, geom, fineLevel)
{}

}}
