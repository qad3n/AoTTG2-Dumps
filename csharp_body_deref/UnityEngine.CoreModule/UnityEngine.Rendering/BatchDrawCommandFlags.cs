// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandFlags
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000371")]
[Flags]
public enum BatchDrawCommandFlags
{
	[Token(Token = "0x40009FA")]
	None = 0,
	[Token(Token = "0x40009FB")]
	FlipWinding = 1,
	[Token(Token = "0x40009FC")]
	HasMotion = 2,
	[Token(Token = "0x40009FD")]
	IsLightMapped = 4,
	[Token(Token = "0x40009FE")]
	HasSortingPosition = 8,
	[Token(Token = "0x40009FF")]
	LODCrossFadeKeyword = 0x10,
	[Token(Token = "0x4000A00")]
	LODCrossFadeValuePacked = 0x20,
	[Token(Token = "0x4000A01")]
	LODCrossFade = LODCrossFadeKeyword | LODCrossFadeValuePacked,
	[Token(Token = "0x4000A02")]
	UseLegacyLightmapsKeyword = 0x40
}
