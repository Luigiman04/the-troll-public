const Collision pss_area_1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-1371, -867, 1371),
	COL_VERTEX(-1371, -867, -1371),
	COL_VERTEX(-1371, 1875, -1371),
	COL_VERTEX(-1371, 1875, 1371),
	COL_VERTEX(1371, -867, -1371),
	COL_VERTEX(1371, 1875, -1371),
	COL_VERTEX(1371, -867, 1371),
	COL_VERTEX(1371, 1875, 1371),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 7),
	COL_TRI(1, 0, 6),
	COL_TRI(1, 6, 4),
	COL_TRI(5, 7, 3),
	COL_TRI(5, 3, 2),
	COL_TRI_STOP(),
	COL_END()
};