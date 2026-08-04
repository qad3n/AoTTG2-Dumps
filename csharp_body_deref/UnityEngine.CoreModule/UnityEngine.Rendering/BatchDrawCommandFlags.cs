// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200030E")]
[Flags]
public enum BatchDrawCommandFlags
{
	[Token(Token = "0x4000987")]
	None = 0,
	[Token(Token = "0x4000988")]
	FlipWinding = 1,
	[Token(Token = "0x4000989")]
	HasMotion = 2,
	[Token(Token = "0x400098A")]
	IsLightMapped = 4,
	[Token(Token = "0x400098B")]
	HasSortingPosition = 8,
	[Token(Token = "0x400098C")]
	LODCrossFade = 0x10
}
