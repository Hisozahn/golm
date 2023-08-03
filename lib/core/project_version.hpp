#pragma once

#include <cstddef>
#include <tuple>

namespace gm
{

class ProjectVersion
{
public:
    static const ProjectVersion current;

    std::size_t major() const;
    std::size_t minor() const;
    std::size_t patch() const;

    friend std::ostream& operator<<(std::ostream& out, ProjectVersion const& project_version);

private:
    using version_tuple_t = std::tuple<std::size_t, std::size_t, std::size_t>;
    explicit ProjectVersion(version_tuple_t version_tuple) noexcept;
    version_tuple_t version_tuple_;
};


} // namespace gm