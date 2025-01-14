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
#include "levels/final_boss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_final_boss_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _final_boss_segment_7SegmentRomStart, _final_boss_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_DOORFLOOR1, DoorFloor1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ROTATE_FINAL, rotate_final_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CAGE_LIP, cage_lip_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_DISAPPEAR_PLAT, disappear_plat_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FINAL_SLIP, final_slip_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, final_boss_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x15, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, -2265, 3230, 954, 0, 0, 0, (1 << 16), bhvExclamationBox),
		OBJECT(MODEL_CAGE_LIP, 1270, 3526, -1750, 0, 0, 0, 0x00000000, bhvCageLip),
		OBJECT(MODEL_YELLOW_COIN, 936, 566, 2044, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1048, 566, 2044, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -936, 566, -2041, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1048, 566, -2041, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_DISAPPEAR_PLAT, -1639, 4621, 2144, 0, 0, 0, 0x00000000, bhvDisappearPlat),
		OBJECT(MODEL_THE_TROLL_FINAL_BOSS, 28, 2098, -37, 0, -180, 0, 0x00000000, bhvFinalBoss),
		OBJECT(MODEL_BULLET_BILL, 28, 2098, -37, 0, -180, 0, 0x00000000, bhvFinalBossBulletBill),
		OBJECT(MODEL_FINAL_SLIP, 579, 2176, 1617, 0, -180, 0, (2 << 16), bhvFinalSlip),
		OBJECT(MODEL_BREAKABLE_BOX, -1249, 4518, 2589, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -807, 4655, 2589, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -370, 4778, 2589, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 72, 4916, 2589, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 546, 5043, 2589, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_DOORFLOOR1, 28, -201, -37, 0, -180, 0, (1 << 16), bhvKeyDoorFloor1),
		OBJECT(MODEL_KOOPA_SHELL, -386, 2330, 1999, 0, 0, 0, 0x00000000, bhvThrowShell),
		OBJECT(MODEL_KOOPA_SHELL, 970, 2912, -2204, 0, 0, 0, 0x00000000, bhvThrowShell),
		OBJECT(MODEL_KOOPA_SHELL, 1213, 5274, 2597, 0, 0, 0, 0x00000000, bhvThrowShell),
		OBJECT(MODEL_PURPLE_SWITCH, -2266, 4621, 2589, 0, -90, 0, (2 << 24), bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_ROTATE_FINAL, 0, 346, 0, 0, -180, 0, 0x00000000, bhvRotateFinal),
		OBJECT(MODEL_NONE, 0, 754, -1456, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 754, -1456),
		TERRAIN(final_boss_area_1_collision),
		MACRO_OBJECTS(final_boss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x25, SEQ_CACKLETTA_FINAL_BATTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 754, -1456),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
