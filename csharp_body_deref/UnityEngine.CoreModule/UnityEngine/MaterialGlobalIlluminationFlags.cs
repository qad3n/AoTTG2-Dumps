// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MaterialGlobalIlluminationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000116")]
[Flags]
public enum MaterialGlobalIlluminationFlags
{
	[Token(Token = "0x400037F")]
	None = 0,
	[Token(Token = "0x4000380")]
	RealtimeEmissive = 1,
	[Token(Token = "0x4000381")]
	BakedEmissive = 2,
	[Token(Token = "0x4000382")]
	EmissiveIsBlack = 4,
	[Token(Token = "0x4000383")]
	AnyEmissive = RealtimeEmissive | BakedEmissive
}
