// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MeshUpdateFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200031B")]
[Flags]
public enum MeshUpdateFlags
{
	[Token(Token = "0x40007E7")]
	Default = 0,
	[Token(Token = "0x40007E8")]
	DontValidateIndices = 1,
	[Token(Token = "0x40007E9")]
	DontResetBoneBounds = 2,
	[Token(Token = "0x40007EA")]
	DontNotifyMeshUsers = 4,
	[Token(Token = "0x40007EB")]
	DontRecalculateBounds = 8,
	[Token(Token = "0x40007EC")]
	DontValidateLodRanges = 0x10
}
