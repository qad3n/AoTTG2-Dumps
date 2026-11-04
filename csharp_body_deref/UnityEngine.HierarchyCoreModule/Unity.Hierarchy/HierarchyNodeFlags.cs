// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Hierarchy;

[Token(Token = "0x2000020")]
[Flags]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeFlags.h")]
public enum HierarchyNodeFlags : uint
{
	[Token(Token = "0x400004C")]
	None = 0u,
	[Token(Token = "0x400004D")]
	Expanded = 1u,
	[Token(Token = "0x400004E")]
	Selected = 2u,
	[Token(Token = "0x400004F")]
	Cut = 4u,
	[Token(Token = "0x4000050")]
	Hidden = 8u
}
