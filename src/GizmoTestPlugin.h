#pragma once

#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_plugin.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>

namespace godot
{
    class Node3DEditorPlugin;

    class GizmoTestPlugin : public EditorPlugin
    {
        GDCLASS( GizmoTestPlugin, EditorPlugin )

    protected:
        void _notification( int p_what );

    public:
        static void _bind_methods();

        virtual int _forward_3d_gui_input( Camera3D *p_camera,
                                           const Ref<InputEvent> &p_event ) override;
        virtual String _get_plugin_name() const override
        {
            return "TestGizmoPlugin";
        }
        virtual bool _has_main_screen() const override
        {
            return false;
        }
        virtual void _edit( Object *p_object ) override;
        virtual bool _handles( Object *p_object ) const override;
        virtual void _make_visible( bool p_visible ) override;

        GizmoTestPlugin();
        ~GizmoTestPlugin();
    };
}