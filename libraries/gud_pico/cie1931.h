// SPDX-License-Identifier: MIT

// https://web.archive.org/web/20230906171704/https://jared.geek.nz/2013/feb/linear-led-pwm
static const uint16_t cie1931[101] = {
    36, 73, 145, 218, 290, 363, 435, 508, 580, 608,
    684, 765, 854, 948, 1050, 1159, 1274, 1398, 1529, 1667,
    1814, 1970, 2134, 2307, 2489, 2680, 2881, 3092, 3313, 3544,
    3785, 4038, 4301, 4575, 4861, 5159, 5468, 5790, 6124, 6470,
    6830, 7202, 7588, 7987, 8400, 8827, 9268, 9724, 10195, 10680,
    11181, 11697, 12228, 12776, 13339, 13919, 14515, 15129, 15759, 16407,
    17072, 17754, 18455, 19174, 19911, 20667, 21442, 22237, 23050, 23883,
    24736, 25609, 26502, 27416, 28350, 29306, 30283, 31281, 32301, 33343,
    34407, 35493, 36602, 37734, 38890, 40068, 41270, 42496, 43745, 45019,
    46318, 47641, 48990, 50363, 51762, 53186, 54637, 56114, 57617, 59146,
    60702,
};
