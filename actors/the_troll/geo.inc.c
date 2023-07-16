#include "src/game/envfx_snow.h"

const GeoLayout the_troll_geo[] = {
	GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 100),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -51, -1, the_troll_Body_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_Chest_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 28, 0, the_troll_Chest_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, the_troll_Chest_mesh_layer_4),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_Head_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 28, 0, the_troll_Head_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, the_troll_Head_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_HigherArm_l_skinned_mesh_layer_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 28, 0, -121, -43, -43),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 36, 0, -5, 110, 21),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_HigherArm_l_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_LowerArm_l_skinned_mesh_layer_1),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 6, 0, 2),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_LowerArm_l_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_Hand_l_skinned_mesh_layer_1),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 22, 0, -2, 0, -1),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_Hand_l_mesh_layer_1),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_HigherArm_r_skinned_mesh_layer_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 28, 0, -121, 43, 43),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 36, 0, -5, -110, -21),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_HigherArm_r_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_LowerArm_r_skinned_mesh_layer_1),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 6, 0, -2),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_LowerArm_r_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_Hand_r_skinned_mesh_layer_1),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 22, 0, -2, 0, 1),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, the_troll_Hand_r_mesh_layer_1),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, the_troll_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, the_troll_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};