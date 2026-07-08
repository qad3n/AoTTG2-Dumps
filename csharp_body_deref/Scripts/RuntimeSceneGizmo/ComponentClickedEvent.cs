using System;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace RuntimeSceneGizmo;

[Serializable]
[Token(Token = "0x200005D")]
public class ComponentClickedEvent : UnityEvent<GizmoComponent>
{
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3C8E260", Offset = "0x3C8E260", VA = "0x3C8E260")]
	public ComponentClickedEvent()
	{
	}
}
