#include "GizmoTestPlugin.h"
#include "GizmoTest.h"

using namespace godot;


void GizmoTestPlugin::_notification(int p_what){

}
int GizmoTestPlugin::_forward_3d_gui_input(Camera3D* p_camera, const Ref<InputEvent>& p_event)
{
	return AFTER_GUI_INPUT_PASS;
}


void GizmoTestPlugin::_edit(Object* p_object)
{
	
	
}

bool GizmoTestPlugin::_handles(Object* p_object) const
{
	return false;
}

void GizmoTestPlugin::_make_visible(bool p_visible)
{
	
}

void GizmoTestPlugin::_bind_methods() {

	
}

GizmoTestPlugin::GizmoTestPlugin()
{
    EditorPlugin::add_node_3d_gizmo_plugin(Ref<GizmoTest>(memnew(GizmoTest)));
}

GizmoTestPlugin::~GizmoTestPlugin()
{
}