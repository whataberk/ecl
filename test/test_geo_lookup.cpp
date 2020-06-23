/****************************************************************************
 *
 *   Copyright (C) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#include <gtest/gtest.h>
#include <math.h>
#include <mathlib/mathlib.h>

#include <geo_lookup/geo_mag_declination.h>

TEST(GeoLookupTest, declination) {
	EXPECT_NEAR(get_mag_declination(-60, -180), 47.85645, 0.49383 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -165), 45.77069, 0.44145 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -150), 43.49819, 0.41164 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -135), 41.42892, 0.39185 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -120), 38.9976, 0.37746 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -105), 34.96589, 0.3685 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -90), 28.41738, 0.3667 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -75), 19.56923, 0.37315 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -60), 9.89045, 0.38769 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -45), 1.27336, 0.40851 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -30), -5.57843, 0.4304 + 2);
	EXPECT_NEAR(get_mag_declination(-60, -15), -11.99528, 0.44431 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 0), -20.07528, 0.44313 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 15), -30.5148, 0.42861 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 30), -42.12401, 0.41023 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 45), -53.21756, 0.39802 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 60), -62.70584, 0.39879 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 75), -70.08357, 0.41975 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 90), -74.85646, 0.47911 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 105), -75.19, 0.63797 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 120), -61.35211, 1.151 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 135), 7.47005, 1.70357 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 150), 43.03378, 0.87805 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 165), 48.39044, 0.60168 + 2);
	EXPECT_NEAR(get_mag_declination(-60, 180), 47.85645, 0.49383 + 2);
	EXPECT_NEAR(get_mag_declination(-45, -180), 26.22215, 0.37404 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -165), 26.70583, 0.36426 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -150), 26.33393, 0.35874 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -135), 25.97449, 0.35623 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -120), 26.05134, 0.35619 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -105), 25.36068, 0.35894 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -90), 21.16715, 0.36706 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -75), 11.71125, 0.38486 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -60), -0.791, 0.41372 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -45), -11.05498, 0.45408 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -30), -16.38578, 0.50753 + 1);
	EXPECT_NEAR(get_mag_declination(-45, -15), -18.63707, 0.56254 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 0), -21.76856, 0.58123 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 15), -29.31562, 0.53707 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 30), -39.37387, 0.46928 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 45), -47.57176, 0.42364 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 60), -51.5309, 0.40931 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 75), -49.87796, 0.42068 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 90), -41.10949, 0.45033 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 105), -24.93099, 0.47634 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 120), -6.71838, 0.47038 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 135), 7.90445, 0.44362 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 150), 17.95383, 0.41443 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 165), 23.76852, 0.39039 + 1);
	EXPECT_NEAR(get_mag_declination(-45, 180), 26.22215, 0.37404 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -180), 16.90568, 0.32856 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -165), 17.55064, 0.3287 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -150), 17.61769, 0.33013 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -135), 17.13623, 0.33283 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -120), 16.62153, 0.33773 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -105), 16.24804, 0.34528 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -90), 13.09743, 0.35685 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -75), 3.24727, 0.3767 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -60), -10.53763, 0.40279 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -45), -20.43122, 0.4368 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -30), -24.4415, 0.48843 + 1);
	EXPECT_NEAR(get_mag_declination(-30, -15), -24.77168, 0.56069 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 0), -21.58798, 0.63113 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 15), -20.41867, 0.61121 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 30), -25.80914, 0.50807 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 45), -31.27616, 0.42484 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 60), -31.5191, 0.38703 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 75), -25.86588, 0.37331 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 90), -15.98781, 0.36426 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 105), -5.95736, 0.35105 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 120), 0.49849, 0.34069 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 135), 5.71564, 0.33633 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 150), 10.88724, 0.33337 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 165), 14.88898, 0.33041 + 1);
	EXPECT_NEAR(get_mag_declination(-30, 180), 16.90568, 0.32856 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -180), 11.94106, 0.30965 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -165), 12.08877, 0.31226 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -150), 12.21384, 0.3161 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -135), 11.88154, 0.32055 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -120), 11.01761, 0.32544 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -105), 10.23755, 0.33067 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -90), 6.72577, 0.33855 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -75), -3.15792, 0.35069 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -60), -15.34807, 0.36207 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -45), -22.60949, 0.37762 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -30), -23.4238, 0.40289 + 1);
	EXPECT_NEAR(get_mag_declination(-15, -15), -19.55848, 0.42598 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 0), -12.27461, 0.4362 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 15), -5.65804, 0.42557 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 30), -5.46561, 0.39235 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 45), -10.37077, 0.35583 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 60), -12.63712, 0.33161 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 75), -10.3973, 0.31879 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 90), -5.19162, 0.31209 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 105), -0.25855, 0.30762 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 120), 1.40457, 0.30599 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 135), 3.70328, 0.30689 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 150), 7.39282, 0.30788 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 165), 10.51546, 0.30852 + 1);
	EXPECT_NEAR(get_mag_declination(-15, 180), 11.94106, 0.30965 + 1);
	EXPECT_NEAR(get_mag_declination(0, -180), 9.75644, 0.3082 + 1);
	EXPECT_NEAR(get_mag_declination(0, -165), 9.42083, 0.31147 + 1);
	EXPECT_NEAR(get_mag_declination(0, -150), 9.34376, 0.31499 + 1);
	EXPECT_NEAR(get_mag_declination(0, -135), 9.21959, 0.31802 + 1);
	EXPECT_NEAR(get_mag_declination(0, -120), 8.48812, 0.32043 + 1);
	EXPECT_NEAR(get_mag_declination(0, -105), 7.36375, 0.32315 + 1);
	EXPECT_NEAR(get_mag_declination(0, -90), 2.94601, 0.32876 + 1);
	EXPECT_NEAR(get_mag_declination(0, -75), -6.42662, 0.33474 + 1);
	EXPECT_NEAR(get_mag_declination(0, -60), -16.09707, 0.33522 + 1);
	EXPECT_NEAR(get_mag_declination(0, -45), -20.19452, 0.33474 + 1);
	EXPECT_NEAR(get_mag_declination(0, -30), -17.21623, 0.33716 + 1);
	EXPECT_NEAR(get_mag_declination(0, -15), -10.57833, 0.33623 + 1);
	EXPECT_NEAR(get_mag_declination(0, 0), -4.59095, 0.33025 + 1);
	EXPECT_NEAR(get_mag_declination(0, 15), -0.12038, 0.32436 + 1);
	EXPECT_NEAR(get_mag_declination(0, 30), 1.74114, 0.31828 + 1);
	EXPECT_NEAR(get_mag_declination(0, 45), -0.94981, 0.31087 + 1);
	EXPECT_NEAR(get_mag_declination(0, 60), -3.64787, 0.30334 + 1);
	EXPECT_NEAR(get_mag_declination(0, 75), -3.84573, 0.29767 + 1);
	EXPECT_NEAR(get_mag_declination(0, 90), -1.91504, 0.29479 + 1);
	EXPECT_NEAR(get_mag_declination(0, 105), 0.27774, 0.29455 + 1);
	EXPECT_NEAR(get_mag_declination(0, 120), 0.11703, 0.29621 + 1);
	EXPECT_NEAR(get_mag_declination(0, 135), 1.47853, 0.29909 + 1);
	EXPECT_NEAR(get_mag_declination(0, 150), 4.98751, 0.30239 + 1);
	EXPECT_NEAR(get_mag_declination(0, 165), 8.28891, 0.30539 + 1);
	EXPECT_NEAR(get_mag_declination(0, 180), 9.75644, 0.3082 + 1);
	EXPECT_NEAR(get_mag_declination(15, -180), 8.58708, 0.31911 + 1);
	EXPECT_NEAR(get_mag_declination(15, -165), 8.97289, 0.32349 + 1);
	EXPECT_NEAR(get_mag_declination(15, -150), 9.32113, 0.32547 + 1);
	EXPECT_NEAR(get_mag_declination(15, -135), 9.68467, 0.32561 + 1);
	EXPECT_NEAR(get_mag_declination(15, -120), 8.82715, 0.32518 + 1);
	EXPECT_NEAR(get_mag_declination(15, -105), 6.42651, 0.32648 + 1);
	EXPECT_NEAR(get_mag_declination(15, -90), 0.44723, 0.33079 + 1);
	EXPECT_NEAR(get_mag_declination(15, -75), -8.44666, 0.33321 + 1);
	EXPECT_NEAR(get_mag_declination(15, -60), -15.45548, 0.32908 + 1);
	EXPECT_NEAR(get_mag_declination(15, -45), -16.51674, 0.3217 + 1);
	EXPECT_NEAR(get_mag_declination(15, -30), -12.09384, 0.31578 + 1);
	EXPECT_NEAR(get_mag_declination(15, -15), -5.75567, 0.31154 + 1);
	EXPECT_NEAR(get_mag_declination(15, 0), -1.0854, 0.3078 + 1);
	EXPECT_NEAR(get_mag_declination(15, 15), 1.75407, 0.3051 + 1);
	EXPECT_NEAR(get_mag_declination(15, 30), 3.47602, 0.30371 + 1);
	EXPECT_NEAR(get_mag_declination(15, 45), 2.078, 0.30223 + 1);
	EXPECT_NEAR(get_mag_declination(15, 60), -0.04158, 0.29941 + 1);
	EXPECT_NEAR(get_mag_declination(15, 75), -0.89229, 0.29626 + 1);
	EXPECT_NEAR(get_mag_declination(15, 90), -0.92175, 0.29419 + 1);
	EXPECT_NEAR(get_mag_declination(15, 105), -0.98576, 0.29446 + 1);
	EXPECT_NEAR(get_mag_declination(15, 120), -2.38605, 0.29673 + 1);
	EXPECT_NEAR(get_mag_declination(15, 135), -1.8639, 0.30065 + 1);
	EXPECT_NEAR(get_mag_declination(15, 150), 1.57267, 0.3065 + 1);
	EXPECT_NEAR(get_mag_declination(15, 165), 5.81844, 0.31307 + 1);
	EXPECT_NEAR(get_mag_declination(15, 180), 8.58708, 0.31911 + 1);
	EXPECT_NEAR(get_mag_declination(30, -180), 6.40083, 0.33285 + 1);
	EXPECT_NEAR(get_mag_declination(30, -165), 9.30504, 0.33872 + 1);
	EXPECT_NEAR(get_mag_declination(30, -150), 11.31609, 0.34028 + 1);
	EXPECT_NEAR(get_mag_declination(30, -135), 12.43273, 0.3403 + 1);
	EXPECT_NEAR(get_mag_declination(30, -120), 11.32934, 0.34167 + 1);
	EXPECT_NEAR(get_mag_declination(30, -105), 7.12581, 0.34557 + 1);
	EXPECT_NEAR(get_mag_declination(30, -90), -1.10651, 0.34947 + 1);
	EXPECT_NEAR(get_mag_declination(30, -75), -10.41853, 0.34667 + 1);
	EXPECT_NEAR(get_mag_declination(30, -60), -15.24713, 0.33821 + 1);
	EXPECT_NEAR(get_mag_declination(30, -45), -14.10415, 0.32943 + 1);
	EXPECT_NEAR(get_mag_declination(30, -30), -9.53799, 0.32269 + 1);
	EXPECT_NEAR(get_mag_declination(30, -15), -3.93201, 0.31877 + 1);
	EXPECT_NEAR(get_mag_declination(30, 0), 0.48782, 0.31694 + 1);
	EXPECT_NEAR(get_mag_declination(30, 15), 3.00083, 0.31622 + 1);
	EXPECT_NEAR(get_mag_declination(30, 30), 4.52506, 0.31662 + 1);
	EXPECT_NEAR(get_mag_declination(30, 45), 4.09927, 0.3167 + 1);
	EXPECT_NEAR(get_mag_declination(30, 60), 2.75614, 0.31416 + 1);
	EXPECT_NEAR(get_mag_declination(30, 75), 1.67103, 0.31052 + 1);
	EXPECT_NEAR(get_mag_declination(30, 90), 0.0971, 0.30779 + 1);
	EXPECT_NEAR(get_mag_declination(30, 105), -2.45354, 0.30715 + 1);
	EXPECT_NEAR(get_mag_declination(30, 120), -5.65967, 0.30813 + 1);
	EXPECT_NEAR(get_mag_declination(30, 135), -6.37786, 0.31078 + 1);
	EXPECT_NEAR(get_mag_declination(30, 150), -3.33399, 0.31641 + 1);
	EXPECT_NEAR(get_mag_declination(30, 165), 1.69368, 0.32438 + 1);
	EXPECT_NEAR(get_mag_declination(30, 180), 6.40083, 0.33285 + 1);
	EXPECT_NEAR(get_mag_declination(45, -180), 3.62109, 0.34825 + 1);
	EXPECT_NEAR(get_mag_declination(45, -165), 9.28403, 0.35425 + 1);
	EXPECT_NEAR(get_mag_declination(45, -150), 13.63655, 0.35997 + 1);
	EXPECT_NEAR(get_mag_declination(45, -135), 15.75584, 0.36834 + 1);
	EXPECT_NEAR(get_mag_declination(45, -120), 14.4834, 0.3825 + 1);
	EXPECT_NEAR(get_mag_declination(45, -105), 8.49721, 0.40139 + 1);
	EXPECT_NEAR(get_mag_declination(45, -90), -2.53271, 0.41167 + 1);
	EXPECT_NEAR(get_mag_declination(45, -75), -13.26142, 0.39845 + 1);
	EXPECT_NEAR(get_mag_declination(45, -60), -17.3156, 0.37768 + 1);
	EXPECT_NEAR(get_mag_declination(45, -45), -15.21238, 0.36428 + 1);
	EXPECT_NEAR(get_mag_declination(45, -30), -10.23056, 0.35761 + 1);
	EXPECT_NEAR(get_mag_declination(45, -15), -4.42796, 0.35538 + 1);
	EXPECT_NEAR(get_mag_declination(45, 0), 0.63662, 0.35643 + 1);
	EXPECT_NEAR(get_mag_declination(45, 15), 4.11888, 0.35889 + 1);
	EXPECT_NEAR(get_mag_declination(45, 30), 6.57652, 0.36114 + 1);
	EXPECT_NEAR(get_mag_declination(45, 45), 7.96032, 0.36158 + 1);
	EXPECT_NEAR(get_mag_declination(45, 60), 7.94947, 0.35902 + 1);
	EXPECT_NEAR(get_mag_declination(45, 75), 6.20597, 0.35569 + 1);
	EXPECT_NEAR(get_mag_declination(45, 90), 2.11032, 0.35339 + 1);
	EXPECT_NEAR(get_mag_declination(45, 105), -3.95144, 0.35064 + 1);
	EXPECT_NEAR(get_mag_declination(45, 120), -9.52628, 0.34525 + 1);
	EXPECT_NEAR(get_mag_declination(45, 135), -11.1018, 0.33999 + 1);
	EXPECT_NEAR(get_mag_declination(45, 150), -8.12332, 0.33905 + 1);
	EXPECT_NEAR(get_mag_declination(45, 165), -2.58541, 0.34243 + 1);
	EXPECT_NEAR(get_mag_declination(45, 180), 3.62109, 0.34825 + 1);
	EXPECT_NEAR(get_mag_declination(60, -180), 2.01403, 0.40742 + 2);
	EXPECT_NEAR(get_mag_declination(60, -165), 9.30575, 0.41751 + 2);
	EXPECT_NEAR(get_mag_declination(60, -150), 15.49664, 0.43912 + 2);
	EXPECT_NEAR(get_mag_declination(60, -135), 19.163, 0.4786 + 2);
	EXPECT_NEAR(get_mag_declination(60, -120), 18.19519, 0.54466 + 2);
	EXPECT_NEAR(get_mag_declination(60, -105), 9.50748, 0.63126 + 2);
	EXPECT_NEAR(get_mag_declination(60, -90), -6.91932, 0.66521 + 2);
	EXPECT_NEAR(get_mag_declination(60, -75), -20.44013, 0.59737 + 2);
	EXPECT_NEAR(get_mag_declination(60, -60), -24.18223, 0.52083 + 2);
	EXPECT_NEAR(get_mag_declination(60, -45), -21.19177, 0.47664 + 2);
	EXPECT_NEAR(get_mag_declination(60, -30), -15.07446, 0.45643 + 2);
	EXPECT_NEAR(get_mag_declination(60, -15), -7.87358, 0.44997 + 2);
	EXPECT_NEAR(get_mag_declination(60, 0), -0.7845, 0.45109 + 2);
	EXPECT_NEAR(get_mag_declination(60, 15), 5.60535, 0.45545 + 2);
	EXPECT_NEAR(get_mag_declination(60, 30), 11.22443, 0.46072 + 2);
	EXPECT_NEAR(get_mag_declination(60, 45), 15.68509, 0.4682 + 2);
	EXPECT_NEAR(get_mag_declination(60, 60), 17.71491, 0.4823 + 2);
	EXPECT_NEAR(get_mag_declination(60, 75), 15.36509, 0.50628 + 2);
	EXPECT_NEAR(get_mag_declination(60, 90), 7.0651, 0.52949 + 2);
	EXPECT_NEAR(get_mag_declination(60, 105), -4.93669, 0.52081 + 2);
	EXPECT_NEAR(get_mag_declination(60, 120), -13.62561, 0.47853 + 2);
	EXPECT_NEAR(get_mag_declination(60, 135), -15.33051, 0.43851 + 2);
	EXPECT_NEAR(get_mag_declination(60, 150), -11.69707, 0.41543 + 2);
	EXPECT_NEAR(get_mag_declination(60, 165), -5.33792, 0.40639 + 2);
	EXPECT_NEAR(get_mag_declination(60, 180), 2.01403, 0.40742 + 2);
	EXPECT_NEAR(get_mag_declination(75, -180), 0.09251, 0.79587 + 2);
	EXPECT_NEAR(get_mag_declination(75, -165), 8.36569, 0.83408 + 2);
	EXPECT_NEAR(get_mag_declination(75, -150), 15.60982, 0.93471 + 2);
	EXPECT_NEAR(get_mag_declination(75, -135), 19.99973, 1.13581 + 2);
	EXPECT_NEAR(get_mag_declination(75, -120), 17.34267, 1.511 + 2);
	EXPECT_NEAR(get_mag_declination(75, -105), -0.73701, 1.98889 + 2);
	EXPECT_NEAR(get_mag_declination(75, -90), -27.94778, 1.82165 + 2);
	EXPECT_NEAR(get_mag_declination(75, -75), -39.25705, 1.31557 + 2);
	EXPECT_NEAR(get_mag_declination(75, -60), -37.96226, 1.00622 + 2);
	EXPECT_NEAR(get_mag_declination(75, -45), -31.25517, 0.84299 + 2);
	EXPECT_NEAR(get_mag_declination(75, -30), -22.19443, 0.75677 + 2);
	EXPECT_NEAR(get_mag_declination(75, -15), -12.09921, 0.7131 + 2);
	EXPECT_NEAR(get_mag_declination(75, 0), -1.6472, 0.69579 + 2);
	EXPECT_NEAR(get_mag_declination(75, 15), 8.72362, 0.69842 + 2);
	EXPECT_NEAR(get_mag_declination(75, 30), 18.59903, 0.72192 + 2);
	EXPECT_NEAR(get_mag_declination(75, 45), 27.36671, 0.77568 + 2);
	EXPECT_NEAR(get_mag_declination(75, 60), 33.86736, 0.88206 + 2);
	EXPECT_NEAR(get_mag_declination(75, 75), 35.5984, 1.08393 + 2);
	EXPECT_NEAR(get_mag_declination(75, 90), 27.13673, 1.41397 + 2);
	EXPECT_NEAR(get_mag_declination(75, 105), 4.71631, 1.59881 + 2);
	EXPECT_NEAR(get_mag_declination(75, 120), -14.04162, 1.32123 + 2);
	EXPECT_NEAR(get_mag_declination(75, 135), -18.52346, 1.03498 + 2);
	EXPECT_NEAR(get_mag_declination(75, 150), -15.0174, 0.87816 + 2);
	EXPECT_NEAR(get_mag_declination(75, 165), -8.10128, 0.80818 + 2);
	EXPECT_NEAR(get_mag_declination(75, 180), 0.09251, 0.79587 + 2);
}
