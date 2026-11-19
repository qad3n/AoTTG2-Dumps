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

[Token(Token = "0x20003AD")]
[Flags]
public enum BatchDrawCommandFlags
{
	[Token(Token = "0x4000B7E")]
	None = 0,
	[Token(Token = "0x4000B7F")]
	FlipWinding = 1,
	[Token(Token = "0x4000B80")]
	HasMotion = 2,
	[Token(Token = "0x4000B81")]
	IsLightMapped = 4,
	[Token(Token = "0x4000B82")]
	HasSortingPosition = 8,
	[Token(Token = "0x4000B83")]
	LODCrossFadeKeyword = 0x10,
	[Token(Token = "0x4000B84")]
	LODCrossFadeValuePacked = 0x20,
	[Token(Token = "0x4000B85")]
	LODCrossFade = LODCrossFadeKeyword | LODCrossFadeValuePacked,
	[Token(Token = "0x4000B86")]
	UseLegacyLightmapsKeyword = 0x40
}
