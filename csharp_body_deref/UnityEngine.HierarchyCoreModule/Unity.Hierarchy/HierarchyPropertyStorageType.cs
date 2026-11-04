// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyStorageType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Hierarchy;

[Token(Token = "0x2000024")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyPropertyStorageType.h")]
public enum HierarchyPropertyStorageType
{
	[Token(Token = "0x4000058")]
	Sparse = 0,
	[Token(Token = "0x4000059")]
	Dense = 1,
	[Token(Token = "0x400005A")]
	Blob = 2,
	[Token(Token = "0x400005B")]
	Default = Dense
}
