#include "golm_lib.hpp"

#include <ostream>

namespace golm
{

const ProjectVersion ProjectVersion::current{std::tuple(0, 1, 0)};

ProjectVersion::ProjectVersion(version_tuple_t version_tuple)
    : version_tuple_(std::move(version_tuple))
{
}

std::size_t ProjectVersion::major() const
{
    return std::get<0>(version_tuple_);
}

std::size_t ProjectVersion::minor() const
{
    return std::get<1>(version_tuple_);
}

std::size_t ProjectVersion::patch() const
{
    return std::get<2>(version_tuple_);
}

std::ostream& operator<<(std::ostream& out, ProjectVersion const& project_version)
{
    out << project_version.major() << "." << project_version.minor() << "." << project_version.patch();
    return out;
}

} // namespace golm