// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.ComponentClickedEvent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/ComponentClickedEvent.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace RuntimeSceneGizmo;

[Serializable]
[Token(Token = "0x200005C")]
public class ComponentClickedEvent : UnityEvent<GizmoComponent>
{
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x576D4C0", Offset = "0x576C4C0", VA = "0x576D4C0")]
	public ComponentClickedEvent()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/ComponentClickedEvent.c (RuntimeSceneGizmo.ComponentClickedEvent$$.ctor): clean
		base();
		return;
	}
}
