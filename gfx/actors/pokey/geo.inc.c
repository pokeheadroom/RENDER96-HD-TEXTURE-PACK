#include "src/game/envfx_snow.h"

const GeoLayout pokey_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pokey_000_displaylist_mesh_layer_1_mat_override_blink_0),
		GEO_DISPLAY_LIST(LAYER_ALPHA, pokey_000_displaylist_mesh_layer_4_mat_override_blink_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pokey_head_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 50),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, pokey_000_displaylist_mesh_layer_1),
					GEO_DISPLAY_LIST(LAYER_ALPHA, pokey_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, pokey_000_switch_opt1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pokey_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, pokey_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
const GeoLayout pokey_body_part_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 50),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, pokey_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pokey_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};