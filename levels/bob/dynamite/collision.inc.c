const Collision dynamite_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(62),
	COL_VERTEX(-65, 0, -145),
	COL_VERTEX(-65, 33, -145),
	COL_VERTEX(-32, 49, -145),
	COL_VERTEX(0, 33, -145),
	COL_VERTEX(0, 0, -145),
	COL_VERTEX(-32, -16, -145),
	COL_VERTEX(-32, 49, 86),
	COL_VERTEX(-65, 33, 86),
	COL_VERTEX(-65, 33, 125),
	COL_VERTEX(-32, 49, 125),
	COL_VERTEX(-65, 0, 86),
	COL_VERTEX(-65, 0, 125),
	COL_VERTEX(32, 49, -145),
	COL_VERTEX(65, 33, -145),
	COL_VERTEX(65, 0, -145),
	COL_VERTEX(32, -16, -145),
	COL_VERTEX(65, 33, 86),
	COL_VERTEX(32, 49, 86),
	COL_VERTEX(32, 49, 125),
	COL_VERTEX(65, 33, 125),
	COL_VERTEX(65, 0, 86),
	COL_VERTEX(65, 0, 125),
	COL_VERTEX(-32, 82, -145),
	COL_VERTEX(0, 99, -145),
	COL_VERTEX(32, 82, -145),
	COL_VERTEX(0, 99, 86),
	COL_VERTEX(-32, 82, 86),
	COL_VERTEX(-32, 82, 125),
	COL_VERTEX(0, 99, 125),
	COL_VERTEX(32, 82, 86),
	COL_VERTEX(32, 82, 125),
	COL_VERTEX(-65, 33, -75),
	COL_VERTEX(-65, 0, -75),
	COL_VERTEX(-65, 0, 52),
	COL_VERTEX(-65, 33, 52),
	COL_VERTEX(-32, 49, -75),
	COL_VERTEX(-32, 49, 52),
	COL_VERTEX(32, 49, -75),
	COL_VERTEX(32, 82, -75),
	COL_VERTEX(32, 82, 52),
	COL_VERTEX(32, 49, 52),
	COL_VERTEX(-32, 82, -75),
	COL_VERTEX(-32, 82, 52),
	COL_VERTEX(0, 99, -75),
	COL_VERTEX(0, 99, 52),
	COL_VERTEX(-32, 82, -109),
	COL_VERTEX(0, 99, -109),
	COL_VERTEX(32, 82, -109),
	COL_VERTEX(-32, 49, -109),
	COL_VERTEX(32, 49, -109),
	COL_VERTEX(-65, 33, -109),
	COL_VERTEX(-65, 0, -109),
	COL_VERTEX(65, 0, -75),
	COL_VERTEX(65, 33, -75),
	COL_VERTEX(65, 33, 52),
	COL_VERTEX(65, 0, 52),
	COL_VERTEX(65, 33, -109),
	COL_VERTEX(65, 0, -109),
	COL_VERTEX(-32, -16, 125),
	COL_VERTEX(0, 0, 125),
	COL_VERTEX(0, 33, 125),
	COL_VERTEX(32, -16, 125),
	COL_TRI_INIT(SURFACE_DEFAULT, 104),
	COL_TRI(0, 1, 2),
	COL_TRI(2, 3, 4),
	COL_TRI(4, 5, 0),
	COL_TRI(2, 4, 0),
	COL_TRI(6, 7, 8),
	COL_TRI(6, 8, 9),
	COL_TRI(7, 10, 11),
	COL_TRI(7, 11, 8),
	COL_TRI(4, 3, 12),
	COL_TRI(12, 13, 14),
	COL_TRI(14, 15, 4),
	COL_TRI(12, 14, 4),
	COL_TRI(16, 17, 18),
	COL_TRI(16, 18, 19),
	COL_TRI(20, 16, 19),
	COL_TRI(20, 19, 21),
	COL_TRI(2, 22, 23),
	COL_TRI(23, 24, 12),
	COL_TRI(12, 3, 2),
	COL_TRI(23, 12, 2),
	COL_TRI(25, 26, 27),
	COL_TRI(25, 27, 28),
	COL_TRI(29, 25, 28),
	COL_TRI(29, 28, 30),
	COL_TRI(26, 6, 9),
	COL_TRI(26, 9, 27),
	COL_TRI(17, 29, 30),
	COL_TRI(17, 30, 18),
	COL_TRI(31, 32, 33),
	COL_TRI(31, 33, 34),
	COL_TRI(35, 31, 34),
	COL_TRI(35, 34, 36),
	COL_TRI(37, 38, 39),
	COL_TRI(37, 39, 40),
	COL_TRI(41, 35, 36),
	COL_TRI(41, 36, 42),
	COL_TRI(38, 43, 44),
	COL_TRI(38, 44, 39),
	COL_TRI(43, 41, 42),
	COL_TRI(43, 42, 44),
	COL_TRI(23, 22, 45),
	COL_TRI(23, 45, 46),
	COL_TRI(24, 23, 46),
	COL_TRI(24, 46, 47),
	COL_TRI(22, 2, 48),
	COL_TRI(22, 48, 45),
	COL_TRI(12, 24, 47),
	COL_TRI(12, 47, 49),
	COL_TRI(2, 1, 50),
	COL_TRI(2, 50, 48),
	COL_TRI(1, 0, 51),
	COL_TRI(1, 51, 50),
	COL_TRI(52, 53, 54),
	COL_TRI(52, 54, 55),
	COL_TRI(53, 37, 40),
	COL_TRI(53, 40, 54),
	COL_TRI(13, 12, 49),
	COL_TRI(13, 49, 56),
	COL_TRI(14, 13, 56),
	COL_TRI(14, 56, 57),
	COL_TRI(40, 39, 29),
	COL_TRI(40, 29, 17),
	COL_TRI(42, 36, 6),
	COL_TRI(42, 6, 26),
	COL_TRI(39, 44, 25),
	COL_TRI(39, 25, 29),
	COL_TRI(44, 42, 26),
	COL_TRI(44, 26, 25),
	COL_TRI(46, 45, 41),
	COL_TRI(46, 41, 43),
	COL_TRI(47, 46, 43),
	COL_TRI(47, 43, 38),
	COL_TRI(45, 48, 35),
	COL_TRI(45, 35, 41),
	COL_TRI(49, 47, 38),
	COL_TRI(49, 38, 37),
	COL_TRI(34, 33, 10),
	COL_TRI(34, 10, 7),
	COL_TRI(36, 34, 7),
	COL_TRI(36, 7, 6),
	COL_TRI(48, 50, 31),
	COL_TRI(48, 31, 35),
	COL_TRI(50, 51, 32),
	COL_TRI(50, 32, 31),
	COL_TRI(55, 54, 16),
	COL_TRI(55, 16, 20),
	COL_TRI(54, 40, 17),
	COL_TRI(54, 17, 16),
	COL_TRI(56, 49, 37),
	COL_TRI(56, 37, 53),
	COL_TRI(57, 56, 53),
	COL_TRI(57, 53, 52),
	COL_TRI(9, 8, 11),
	COL_TRI(11, 58, 59),
	COL_TRI(59, 60, 9),
	COL_TRI(11, 59, 9),
	COL_TRI(18, 60, 59),
	COL_TRI(59, 61, 21),
	COL_TRI(21, 19, 18),
	COL_TRI(59, 21, 18),
	COL_TRI(28, 27, 9),
	COL_TRI(9, 60, 18),
	COL_TRI(18, 30, 28),
	COL_TRI(9, 18, 28),
	COL_TRI_STOP(),
	COL_END()
};