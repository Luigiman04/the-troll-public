void scroll_castle_courtyard_dl_Main_NoCol_mesh_layer_6_vtx_0() {
	int i = 0;
	int count = 150;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_Main_NoCol_mesh_layer_6_vtx_0);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_courtyard() {
	scroll_castle_courtyard_dl_Main_NoCol_mesh_layer_6_vtx_0();
}
