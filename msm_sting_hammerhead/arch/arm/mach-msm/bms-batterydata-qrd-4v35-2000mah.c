/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#include <linux/mfd/pm8xxx/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2096, 2124, 2121, 2118, 2103},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60,
		55, 50, 45, 40, 35, 30, 25, 20, 16, 13,
		11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{2422, 324, 100, 79, 72},
				{2417, 325, 100, 79, 71},
				{2344, 327, 100, 80, 72},
				{2416, 336, 102, 81, 73},
				{2072, 354, 107, 82, 73},
				{1961, 372, 113, 84, 75},
				{1929, 341, 118, 87, 77},
				{1929, 321, 130, 93, 80},
				{2041, 306, 140, 104, 85},
				{2202, 292, 119, 96, 83},
				{2374, 290, 98, 80, 73},
				{2550, 292, 98, 79, 72},
				{2727, 294, 99, 81, 73},
				{2904, 303, 100, 82, 75},
				{3091, 323, 100, 81, 73},
				{3278, 348, 100, 80, 73},
				{3470, 376, 99, 79, 72},
				{3627, 386, 100, 79, 72},
				{3672, 398, 100, 80, 71},
				{3812, 424, 100, 80, 73},
				{3895, 443, 101, 80, 73},
				{3985, 465, 102, 82, 75},
				{4094, 497, 105, 83, 76},
				{4211, 533, 109, 85, 79},
				{4335, 579, 113, 87, 80},
				{4505, 612, 113, 85, 76},
				{4693, 643, 113, 86, 77},
				{4930, 712, 120, 90, 81},
				{5283, 835, 145, 111, 107},
				{10293, 15765, 5566, 6904, 2547},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60,
		55, 50, 45, 40, 35, 30, 25, 20, 16, 13,
		11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4340, 4340, 4335, 4330, 4323},
				{4217, 4260, 4265, 4263, 4258},
				{4135, 4203, 4207, 4205, 4201},
				{4084, 4150, 4152, 4150, 4146},
				{3992, 4101, 4101, 4097, 4093},
				{3934, 4049, 4051, 4046, 4044},
				{3889, 3974, 3995, 3998, 3999},
				{3852, 3926, 3958, 3961, 3959},
				{3832, 3892, 3921, 3923, 3921},
				{3819, 3859, 3874, 3877, 3877},
				{3807, 3831, 3838, 3838, 3838},
				{3796, 3809, 3815, 3815, 3814},
				{3784, 3792, 3797, 3797, 3796},
				{3770, 3780, 3783, 3782, 3781},
				{3754, 3770, 3772, 3769, 3764},
				{3737, 3758, 3763, 3754, 3742},
				{3717, 3737, 3744, 3735, 3720},
				{3700, 3713, 3718, 3710, 3696},
				{3687, 3701, 3692, 3683, 3671},
				{3674, 3695, 3689, 3681, 3669},
				{3667, 3692, 3688, 3680, 3669},
				{3659, 3690, 3687, 3680, 3668},
				{3649, 3687, 3685, 3678, 3667},
				{3636, 3683, 3683, 3676, 3664},
				{3618, 3674, 3679, 3671, 3658},
				{3596, 3652, 3663, 3652, 3632},
				{3566, 3611, 3620, 3606, 3584},
				{3522, 3547, 3555, 3540, 3517},
				{3460, 3449, 3461, 3446, 3424},
				{3356, 3282, 3312, 3299, 3273},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data QRD_4v35_2000mAh_data = {
	.fcc				= 2000,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 172
};
