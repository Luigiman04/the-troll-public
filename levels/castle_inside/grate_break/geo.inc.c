#include "src/game/envfx_snow.h"

const GeoLayout grate_break_geo[] = {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, grate_break_Grate_001_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, grate_break_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};