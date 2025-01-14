#ifndef BOB_HEADER_H
#define BOB_HEADER_H

#include "types.h"

// geo
extern const GeoLayout bob_geo_000440[];
extern const GeoLayout bob_geo_000458[];
extern const GeoLayout bob_geo_000470[];
extern const GeoLayout bob_geo_000488[];

// leveldata
extern const Gfx bob_seg7_dl_07004390[];
extern const Gfx bob_seg7_dl_07009D80[];
extern const Gfx bob_seg7_dl_0700A470[];
extern const Gfx bob_seg7_dl_0700A920[];
extern const Gfx bob_seg7_dl_0700DD18[];
extern const Gfx bob_seg7_dl_0700E338[];
extern const Gfx bob_seg7_dl_0700E458[];
extern const Gfx bob_seg7_dl_0700E768[];
extern const Gfx bob_seg7_dl_0700E8A0[];
extern const Collision bob_seg7_collision_level[];
extern const MacroObject bob_seg7_macro_objs[];
extern const Collision bob_seg7_collision_chain_chomp_gate[];
extern const Collision bob_seg7_collision_bridge[];
extern const Collision bob_seg7_collision_gate[];
extern const Trajectory bob_seg7_metal_ball_path0[];
extern const Trajectory bob_seg7_metal_ball_path1[];
extern const Trajectory bob_seg7_trajectory_koopa[];

// script
extern const LevelScript level_bob_entry[];


#include "levels/bob/header.inc.h"

#include "levels/bob/mushroom_troll_1/collision_header.h"

#include "levels/bob/mushroom_troll_1/geo_header.h"

#include "levels/bob/pushy_wall_1/collision_header.h"

#include "levels/bob/pushy_wall_1/geo_header.h"

#include "levels/bob/hidden_cage/collision_header.h"

#include "levels/bob/hidden_cage/geo_header.h"

#include "levels/bob/dynamite/collision_header.h"

#include "levels/bob/dynamite/geo_header.h"

#include "levels/bob/dynamite_rope/collision_header.h"

#include "levels/bob/dynamite_rope/geo_header.h"

#include "levels/bob/breakable_wall/collision_header.h"

#include "levels/bob/breakable_wall/geo_header.h"

#include "levels/bob/fire_flower/geo_header.h"

#include "levels/bob/cannon_wall/geo_header.h"

#include "levels/bob/cannon_wall/collision_header.h"

#include "levels/bob/mushroom_troll_2/geo_header.h"

#include "levels/bob/mushroom_troll_2/collision_header.h"

#include "levels/bob/cloud_troll/geo_header.h"

#include "levels/bob/falling_ground/collision_header.h"

#include "levels/bob/falling_ground/geo_header.h"

#endif
