#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/classes/label.hpp"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/variant/utility_functions.hpp"
#include "GizmoTest.h"
#include "godot_cpp/classes/standard_material3d.hpp"


GizmoTest::GizmoTest(){
 godot::UtilityFunctions::print("Hello!");
 create_material("main", godot::Color(1,0,0));
 create_handle_material("handles");
}

GizmoTest::~GizmoTest()
{
}

godot::String GizmoTest::_get_gizmo_name() const {
    return "TestGizmo";
}

bool GizmoTest::_has_gizmo( godot::Node3D *for_node_3d ) const
{
    
    return for_node_3d->get_name() == godot::StringName("help");
}

void GizmoTest::_redraw( const godot::Ref<godot::EditorNode3DGizmo> &gizmo )
{
    gizmo->clear();

    //godot::Node3D* node3d = gizmo->get_node_3d();
    godot::PackedVector3Array lines = godot::PackedVector3Array();

    lines.push_back(godot::Vector3(0.0,1.0,0.0));
    lines.push_back(godot::Vector3(0,5,0));

    godot::PackedVector3Array handles = godot::PackedVector3Array();

    handles.push_back(godot::Vector3(0.0,1.0,0.0));
    handles.push_back(godot::Vector3(0,5,0));


    gizmo->add_lines(lines,get_material("main", gizmo),false);
    gizmo->add_handles(handles,get_material("handles", gizmo), godot::PackedInt32Array());
}

/*
void GizmoTest::_redraw()
{
}

bool GizmoTest::_is_handle_highlighted( int32_t id, bool secondary ) const{
    return false;
}

godot::String GizmoTest::_get_handle_name( int32_t id, bool secondary ) const
{
    return godot::String("");
}

godot::Variant GizmoTest::_get_handle_value( int32_t id, bool secondary ) const
{
    return godot::Variant();
}

void GizmoTest::_set_handle( int32_t id, bool secondary, godot::Camera3D *camera,
                             const godot::Vector2 &point )
{
}

void GizmoTest::_commit_handle( int32_t id, bool secondary, const godot::Variant &restore,
                                bool cancel )
{


}

int32_t GizmoTest::_subgizmos_intersect_ray( godot::Camera3D *camera,
                                             const godot::Vector2 &point ) const
{
    return 0;
}

godot::PackedInt32Array GizmoTest::_subgizmos_intersect_frustum( godot::Camera3D *camera,
                                                   const godot::TypedArray<godot::Plane> &frustum ) const 
{
    godot::PackedInt32Array arr;
    return arr;
}

void GizmoTest::_set_subgizmo_transform( int32_t id, const godot::Transform3D &transform ) {

}


godot::Transform3D GizmoTest::_get_subgizmo_transform(int32_t id ) const{
    godot::Transform3D a;
    return a;
}
/*
void GizmoTest::_commit_subgizmos( const godot::PackedInt32Array &ids, const godot::TypedArray<godot::Transform3D> &restores,
                            bool cancel )
{

}
*/
void GizmoTest::_bind_methods()
{
}

// Gizmo Material
