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

[Token(Token = "0x2000028")]
[Flags]
public enum ClearFlag
{
	[Token(Token = "0x40000B0")]
	None = 0,
	[Token(Token = "0x40000B1")]
	Color = 1,
	[Token(Token = "0x40000B2")]
	Depth = 2,
	[Token(Token = "0x40000B3")]
	Stencil = 4,
	[Token(Token = "0x40000B4")]
	DepthStencil = Depth | Stencil,
	[Token(Token = "0x40000B5")]
	ColorStencil = Color | Stencil,
	[Token(Token = "0x40000B6")]
	All = DepthStencil | Color
}
