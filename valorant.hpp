#pragma once
#include <cstddef>

/*Version: 4.25.4.0*/

/*Classes*/
std::ptrdiff_t bone_component = 0x550;			      
std::ptrdiff_t mesh_component = 0x410;                // world > persistent_level > aactor > mesh
std::ptrdiff_t root_component = 0x210;                // world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component                  // aactor > root_component
std::ptrdiff_t persistent_level = 0x38;               // world > persistent_level
std::ptrdiff_t owning_game_instance = 0x1a8;          // world > game_instance
std::ptrdiff_t player_state = 0x3d0;                  // world > persistent_level > aactor > player_state
std::ptrdiff_t team_component = 0x580;                // world > persistent_level > aactor > player_state > team_component
std::ptrdiff_t team = 0xf8;                           // world > persistent_level > aactor > team_component > team_id
std::ptrdiff_t damage_handler = 0x968;                // world > game_instance > localplayers_array[0] > playercontroller > apawn > damage_controller				// aactor > damage_controller
std::ptrdiff_t cached_life = 0x1b0;                   // world > persistent_level > aactor > damage_controller > health
std::ptrdiff_t relative_location = 0x164;             // world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component > position		// aactor > root_component > position
std::ptrdiff_t relative_rotation = 0x170;             // StructProperty Engine.KismetSystemLibrary.MoveComponentTo.TargetRelativeRotation 
std::ptrdiff_t player_controller = 0x38;              // world > game_instance > localplayers_array[0] > playercontroller
std::ptrdiff_t acknowledged_pawn = 0x440;             // world > game_instance > localplayers_array[0] > playercontroller > apawn									// aactor > apawn
std::ptrdiff_t player_camera_manager = 0x458;         // Class Engine.PlayerCameraManager
std::ptrdiff_t camera_cache_private = 0x1f80;
std::ptrdiff_t control_rotation = 0x420;              // world > game_instance > localplayers_array[0] > playercontroller > camera_controller
