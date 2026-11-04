// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000081")]
[Flags]
internal enum InstanceFlags : byte
{
	[Token(Token = "0x4000252")]
	None = 0,
	[Token(Token = "0x4000253")]
	AffectsLightmaps = 1,
	[Token(Token = "0x4000254")]
	IsShadowsOff = 2,
	[Token(Token = "0x4000255")]
	IsShadowsOnly = 4,
	[Token(Token = "0x4000256")]
	HasMeshLod = 8,
	[Token(Token = "0x4000257")]
	SmallMeshCulling = 0x10
}
