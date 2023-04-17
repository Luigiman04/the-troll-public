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


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/maple_treewway/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_maple_treewway_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _maple_treewway_segment_7SegmentRomStart, _maple_treewway_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEAF_PILE, leaf_pile_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHESTNUT, chestnut_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GOLDEN_CHESTNUT, golden_chestnut_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MAPLE_TREE, maple_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, maple_treewway_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, 362, 719, -2541, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -463, 2679, -7851, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1229, 2181, -4202, 0, 0, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_CHESTNUT, 1133, 1235, -6847, 0, 0, 0, (0 << 16), bhvLuigimanChestnut),
		OBJECT(MODEL_NONE, -221, 907, -6620, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -361, 1675, -5851, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2907, 1082, -5972, 0, 97, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3054, 1151, -2687, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2936, -402, -9087, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3480, 135, -7559, 0, 90, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 883, 2329, -8058, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, 168, 366, -4766, 0, -52, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2159, 993, -5399, 0, 109, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3991, 299, -10616, 0, -80, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3234, 304, -10875, 0, -158, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 408, 2329, -7820, 0, -80, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_LEAF_PILE, 800, 11, 832, 0, 43, 0, (2 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_LEAF_PILE, -516, 583, -5961, 0, -152, 0, (1 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_LEAF_PILE, 707, 11, -1534, 0, -152, 0, (1 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_LEAF_PILE, 590, 366, -3851, 0, -60, 0, (1 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_LEAF_PILE, 2307, 1015, -4274, 0, 42, 0, (0 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_LEAF_PILE, 4471, 301, -10171, -5, -109, 4, (0 << 16), bhvLuigimanLeafPile),
		OBJECT(MODEL_METAL_BOX, 362, 11, -2078, 0, 0, 0, 0x00000000, bhvPushableMetalBox),
		OBJECT(MODEL_MIPS, -463, 3184, -7494, 0, 0, 0, (1 << 24), bhvMips),
		OBJECT(MODEL_RED_COIN, 3054, 1151, -2687, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2896, 883, -5962, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2936, 345, -9088, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1633, 689, -8765, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4471, 304, -10171, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2971, 1246, -11228, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3570, 1873, -9397, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1886, 2097, -11012, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_METAL_BOX, 645, 3184, -9847, 0, 0, 0, 0x00000000, bhvPushableMetalBox),
		OBJECT(MODEL_NONE, 4067, 613, -11003, 0, 0, 0, (2 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_MAPLE_TREE, -711, 11, -1111, 0, 175, 0, (63 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_MAPLE_TREE, -582, 366, -4518, 0, 175, 0, (63 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_MAPLE_TREE, 3711, 1081, -4324, 0, 175, 0, (63 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_MAPLE_TREE, 2971, 306, -11232, 0, -156, 0, (63 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_MAPLE_TREE, 883, 2329, -8058, 0, -59, 0, (63 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 0, 261, 9, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 0, 261, 9),
		OBJECT(MODEL_YELLOW_COIN, 362, 390, -2541, 0, 0, 0, (5 << 16), bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 362, 511, -2541, 0, 0, 0, (5 << 16), bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2797, 1296, -9397, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2410, 1126, -9397, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3331, 1658, -9397, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(maple_treewway_area_1_collision),
		MACRO_OBJECTS(maple_treewway_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, 261, 9),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
