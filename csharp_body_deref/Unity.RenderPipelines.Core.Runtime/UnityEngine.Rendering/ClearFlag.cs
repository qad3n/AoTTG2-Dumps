// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ClearFlag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000065")]
[Flags]
public enum ClearFlag
{
	[Token(Token = "0x40001AD")]
	None = 0,
	[Token(Token = "0x40001AE")]
	Color = 1,
	[Token(Token = "0x40001AF")]
	Depth = 2,
	[Token(Token = "0x40001B0")]
	Stencil = 4,
	[Token(Token = "0x40001B1")]
	DepthStencil = 6,
	[Token(Token = "0x40001B2")]
	ColorStencil = 5,
	[Token(Token = "0x40001B3")]
	All = 7
}
