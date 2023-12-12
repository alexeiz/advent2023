#pragma once

namespace day11_test {
inline constexpr char const * universe[] = {
    "...#......",
    ".......#..",
    "#.........",
    "..........",
    "......#...",
    ".#........",
    ".........#",
    "..........",
    ".......#..",
    "#...#.....",
};
}  // namespace day11_test

namespace day11 {
inline constexpr char const * universe[] = {
    "..........#............................................#..........#.....#...........................................#.......#.........#.....",
    ".....#...................#..............#....................................................#..............................................",
    "..............................#....................#...................................................#....................................",
    ".............................................#.....................................................................................#........",
    "............#................................................................#......#.......................................................",
    "......................................#..................#.........................................#........................................",
    ".............................................................................................................................#..............",
    ".................#.....#....................................................................................................................",
    ".....................................................#...........#..........................................#.............................#.",
    ".....#..........................#...............#.......................................#...........................#.......................",
    "....................#................#...............................#.........................#.....#......................................",
    "...........#.............................................#..................................................................................",
    "................................................................................................................................#.....#.....",
    "................#...................................#...........#......................................................#....................",
    ".........................#.................................................#.................................#.............................#",
    "...#..............................#...................................#................................#....................................",
    "...............................................................................#............................................................",
    "..................................................................#...........................#..........................#........#.........",
    ".........#....................#........................................................................................................#....",
    "..........................................................................#..............#........................#.........................",
    "....................#...............................#........#..............................................................................",
    "..#..............................#........#...................................#..........................#..................#...............",
    "......................................................................#...........................#............#...................#........",
    "........#................#..............................#.............................................................#.................#...",
    "......................................#......#....................#........#.....#.........#................................................",
    ".....................#............................#.............................................................................#...........",
    "....#.........................#.............................................................................#...............................",
    "............#..................................................#................................#...........................#...............",
    "....................................................................................#..................#.............#......................",
    "..........................................................................................................................................#.",
    "...................................#...............#.....................................#.......................#..........................",
    "..#................#.......................#................................................................................................",
    "...........#...............#...........................................#.................................................#.........#........",
    "......#.....................................................................#............................#..................................",
    ".........................................................#..................................................................................",
    "...................................................................#........................................................................",
    ".........#....................................................#......................................#............#....................#....",
    "...................................................#....................#...........#......................#...............#................",
    "..#..............................#......#........................................................#..........................................",
    "........................................................#...........................................................................#.......",
    "......................................................................................................................#.....................",
    "......#......................................................................#................#.............................................",
    "............................................#..............#............................................#...................#...............",
    ".......................#........#......#........................#..................................................#........................",
    "....................................................#......................................#.......#.........#..............................",
    "........#..........................................................................................................................#........",
    "................#...........................................................................................................................",
    "#..........................#.......#......#.............................#.................................#.................................",
    "......................................................#.............................#............#.......................#.....#............",
    "...................#.............................................#...........#...........#..............................................#...",
    "...............................#..................#..........................................................#..............................",
    "..............#..............................................#.......................................#......................................",
    "..#.....................#.............#........................................................#............................................",
    "...................................................................#........................................................................",
    "............................................................................................................................................",
    "........#.......#.....................................................................#.....................................................",
    "...............................#.....................#..................#.....................................#.........#...................",
    "..............................................#...............................#............#........#.......................................",
    ".#.................#........................................................................................................................",
    "..................................#................................................#.....................................................#..",
    "............................................................................................................................................",
    "...........#..................#....................#....................................#...................................................",
    "....#....................................#.........................#.....#......................#...............#..............#............",
    ".................................................................................#..........................................................",
    "...............................................#........................................................#...........#.....................#.",
    "........................#........#.........................#................................................................................",
    "....................................................................................#..............................................#........",
    "...#......................................#.................................................................................................",
    ".....................................................#.........................................#......#.........#...........................",
    "..............................#..........................................................#.................#................#...............",
    "..............#....................................................#......#.................................................................",
    "........#............#..........................................................................................................#...........",
    "............................................................................................................................................",
    "...........................#.....................#..............#..................................#................................#.......",
    "............................................................................#...............................................................",
    ".............................................#..........................................................#.................................#.",
    ".....................................................#..............#.......................................................................",
    "......#................#................#..................#.................................................#...........#..................",
    "................#.................#......................................#........................................#...........#.............",
    "...........#....................................#................#..........................#......................................#........",
    "............................................................................................................................................",
    "...................#..................................#.....................................................................................",
    "...#.......................#..............#.................#..............#..........#...................................................#.",
    "......................................................................................................#................#.............#......",
    "....................................................................#............................#..............................#...........",
    "...............................#..................#.......................................#...............#................#................",
    "............................................................................................................................................",
    "............................................................................................................................................",
    "......................#...............................#..........#.............................................#...................#........",
    "........................................#..............................................................#.................#..................",
    "..........................#........#.......................................#..........#....................................................#",
    "..................#...........................#.............................................................................................",
    "......#....................................................#...............................#................................................",
    "..............................#.............................................................................................................",
    "................................................................................................#........#..................................",
    "#.............#.......................................................#........#...............................................#.......#....",
    "...........................#...................................................................................#............................",
    "....#...................................#...................................................................................................",
    "................................................#......#..................................................................................#.",
    ".......................................................................................#.............#......................................",
    "................................#..........................#..................#...........................#.................................",
    "....................#...........................................................................................#...................#.......",
    "...................................................#..............#.......#............................................#....................",
    "..#.........................................................................................................................................",
    "........#.....#.......................#.......#..............................................................................#..............",
    "......................#.......#.........................#........................#...........#.......#...................................#..",
    "...............................................................................................................#............................",
    ".......................................................................................#..................#.................................",
    "........................................................................#.........................#..................#......................",
    "..........................................#.....#.........................................................................#.................",
    "..................#..........#...............................#..............................................................................",
    "......................................#........................................#.........#..................................................",
    "...#...............................................................................................................#....................#...",
    "........#..............................................#...............#.....................................................#..............",
    "...................................#........................................#...............#............#..........................#.......",
    "............#.................#.............................................................................................................",
    "....................#.............................#.........................................................................................",
    "....................................................................................#..............#........................................",
    "...............#......................................#.......................................#.........................................#...",
    ".#........................#........................................#...............................................#......#.................",
    "........................................#.................................................#.................................................",
    ".....#...................................................................#..................................................................",
    "..................................................................................................#............#............................",
    "............#.......#.........#.....#...............#.......#...........................................#...................................",
    "..#..........................................#......................#..................#...............................................#....",
    "............................................................................................................................................",
    ".........................#.............#....................................................................................................",
    "..................................................#............................#................................#...................#.......",
    "...................................#..............................................................#......#..................................",
    "............................................................................................................................................",
    "........................................................#.....#............................#..........................#.....#...............",
    "......................#.......................#..........................#.............................................................#....",
    "......#.....#.........................................................................................#.....................................",
    "..................................................................#...............................................................#.........",
    "...................................#.........................................#.................#..........................#...............#.",
    "..#.........................................#.........................#..............#......................................................",
    "...................................................#......................................#...................#.............................",
    ".........................................................#..................................................................................",
    "..............#................................................#..................................#.........................................",
    "...................#..........#..........#................................................................#......#............#............#",
};
}  // namespace day11