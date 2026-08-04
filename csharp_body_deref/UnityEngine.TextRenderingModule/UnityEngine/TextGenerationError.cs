// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextGenerationError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
[Flags]
internal enum TextGenerationError
{
	[Token(Token = "0x4000007")]
	None = 0,
	[Token(Token = "0x4000008")]
	CustomSizeOnNonDynamicFont = 1,
	[Token(Token = "0x4000009")]
	CustomStyleOnNonDynamicFont = 2,
	[Token(Token = "0x400000A")]
	NoFont = 4
}
