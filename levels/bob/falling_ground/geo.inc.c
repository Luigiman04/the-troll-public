#include "src/game/envfx_snow.h"

const GeoLayout falling_ground_geo[] = {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, falling_ground_Main_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, falling_ground_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
