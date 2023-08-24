#include "src/game/envfx_snow.h"

const GeoLayout secret_crack_geo[] = {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, secret_crack_Crack_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, secret_crack_Crack_001_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, secret_crack_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, secret_crack_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};