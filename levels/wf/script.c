#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_DYNAMITE_WF, dynamite_wf_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_DOORFLOOR2, DoorFloor2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KEYDOOR1, KeyDoor1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GRATE_TROLL, Grate_Troll_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, -528, 423, 2023, 0, -180, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_BETA_BOO_KEY, 322, 312, 4091, 0, -180, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_BETA_BOO_KEY, 3574, 2842, -6240, 0, -90, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_BETA_BOO_KEY, 1660, 300, 2023, 0, -180, 0, (1 << 16), bhvDoorKey),
		OBJECT(MODEL_BETA_BOO_KEY, -642, 1256, 478, 0, -180, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_BETA_BOO_KEY, -642, 1256, 729, 0, -180, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_BETA_BOO_KEY, 3824, 2842, -6240, 0, -90, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_GRATE_TROLL, 3705, 1496, -5775, 0, 0, 0, 0x00000000, bhvGrateTroll),
		OBJECT(MODEL_GRATE_TROLL, 5400, 1496, -2481, 0, -180, 0, 0x00000000, bhvGrateTroll),
		OBJECT(MODEL_BETA_BOO_KEY, 6096, 2842, -3794, 0, 0, 0, 0x00000000, bhvDoorKey),
		OBJECT(MODEL_DYNAMITE_WF, 1660, -700, 2023, 0, -180, 0, (2 << 16), bhvDynamite),
		OBJECT(MODEL_DYNAMITE_WF, 3705, 1496, -6348, 0, -90, 0, (2 << 16), bhvDynamite),
		OBJECT(MODEL_DYNAMITE_WF, 7911, 1496, -2055, 0, 45, 0, (2 << 16), bhvDynamite),
		OBJECT(MODEL_KEYDOOR1, 322, 40, 3130, 0, 0, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_KEYDOOR1, 322, 40, 1064, 0, 0, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_DOORFLOOR2, -30, 1554, -4185, 0, -90, 0, (1 << 16), bhvKeyDoorFloor2),
		OBJECT(MODEL_KEYDOOR1, 7203, 2496, 203, 0, -180, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_KEYDOOR1, 6045, 2496, 203, 0, -180, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_KEYDOOR1, 4755, 2496, 203, 0, -180, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_KEYDOOR1, 3596, 2496, 203, 0, -180, 0, 0x00000000, bhvKeyDoor),
		OBJECT(MODEL_THE_TROLL, -103, 40, 4378, 0, 34, 0, (7 << 16), bhvTrollInteract),
		OBJECT(MODEL_NONE, 322, 138, 4833, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 322, 138, 4833),
		OBJECT(MODEL_NONE, 322, 346, 4833, 0, -180, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_PIPE_NEW, 5277, 2496, 2454, 0, 0, 0, 0x000C0000, bhvWarpPipe),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x26, SEQ_CRESCENT_MOON_VILLAGE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 322, 138, 4833),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
