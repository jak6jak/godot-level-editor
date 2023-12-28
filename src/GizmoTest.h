#pragma once
// Copied from godot-cpp/test/src and modified.

#include "godot_cpp/classes/camera3d.hpp"
#include "godot_cpp/classes/editor_node3d_gizmo_plugin.hpp"
#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/core/binder_common.hpp"
#include "godot_cpp/variant/plane.hpp"
#include "godot_cpp/variant/string.hpp"
#include "godot_cpp/variant/transform3d.hpp"
#include "godot_cpp/variant/variant.hpp"

class GizmoTest : public godot::EditorNode3DGizmoPlugin
{
    GDCLASS( GizmoTest, EditorNode3DGizmoPlugin )
    public: 
    GizmoTest();
    ~GizmoTest();

   
    godot::String _get_gizmo_name() const override;
    bool _has_gizmo(godot::Node3D * for_node_3d) const override;
    void _redraw(const godot::Ref<godot::EditorNode3DGizmo> &gizmo) override;
public:
/*
    void _redraw();
    godot::String _get_handle_name( int32_t id, bool secondary ) const;
    bool _is_handle_highlighted( int32_t id, bool secondary ) const;
    godot::Variant _get_handle_value( int32_t id, bool secondary ) const;
    void _set_handle( int32_t id, bool secondary, godot::Camera3D *camera,
                      const godot::Vector2 &point );
    // void _commit_handle( int32_t id, bool secondary, const godot::Variant &restore, bool cancel
    // );
    int32_t _subgizmos_intersect_ray( godot::Camera3D *camera, const godot::Vector2 &point ) const;
    godot::PackedInt32Array _subgizmos_intersect_frustum(
        godot::Camera3D *camera, const godot::TypedArray<godot::Plane> &frustum ) const;
    void _set_subgizmo_transform( int32_t id, const godot::Transform3D &transform );
    godot::Transform3D _get_subgizmo_transform( int32_t id ) const;
    // void _commit_subgizmos( const godot::PackedInt32Array &ids, const
    // godot::TypedArray<godot::Transform3D> &restores,
    //                        bool cancel );
*/
protected:
    static void _bind_methods();
};