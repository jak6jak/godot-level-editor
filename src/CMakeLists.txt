# SPDX-License-Identifier: Unlicense

target_sources( ${PROJECT_NAME}
    PRIVATE
        Example.h
        Example.cpp
        GDExtensionTemplate.h
        GDExtensionTemplate.cpp
        RegisterExtension.cpp
        GizmoTest.h
        GizmoTest.cpp
        GizmoTestPlugin.h
        GizmoTestPlugin.cpp

)

target_include_directories( ${PROJECT_NAME}
    PRIVATE
        "src"
)
