#include "src/game/envfx_snow.h"

const GeoLayout Grate_Troll_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, Grate_Troll_Main_002_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, Grate_Troll_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
