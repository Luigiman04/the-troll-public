void scroll_pushy_wall_1_Cube_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 16;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(pushy_wall_1_Cube_mesh_layer_4_vtx_0);

	deltaX = (int)(2.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_level_geo_pushy_wall_1() {
	scroll_pushy_wall_1_Cube_mesh_layer_4_vtx_0();
}
