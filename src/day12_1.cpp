#include "common.hpp"
#include "puzzle_reg.hpp"
#include "day12.hpp"

using namespace std;

namespace {
/// Hot springs.
/// https://adventofcode.com/2023/day/12

int count_arrangement(string_view rec, int narr, int cur_gr, span<int> groups)
{
    if (rec.empty())
        return narr + ((groups.empty() && !cur_gr) || (size(groups) == 1 && groups.front() == cur_gr));

    auto term_group = [&] {
        if (!cur_gr)
            return count_arrangement(rec.substr(1), narr, cur_gr, groups);

        if (groups.empty() || groups.front() != cur_gr)
            return 0;

        return count_arrangement(rec.substr(1), narr, 0, groups.subspan(1));
    };

    auto extend_group = [&] {
        return count_arrangement(rec.substr(1), narr, cur_gr + 1, groups);
    };

    if (rec.front() == '.')  // terminate current group
        return narr + term_group();

    if (rec.front() == '#')  // extend current group
        return narr + extend_group();

    assert(rec.front() == '?');  // uncertain
    return narr + term_group() + extend_group();
}

puzzle_reg _{"12.1", []{
    using namespace day12;

    int arrangements = 0;
    for (auto && s: springs)
        arrangements += count_arrangement(s.first, 0, 0, {begin(s.second), end(s.second)});

    fmt::println(cout, "total hot spring arrangements: {}", arrangements);
}};
}
