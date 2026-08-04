// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderStateMask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F5")]
[Flags]
public enum RenderStateMask
{
	[Token(Token = "0x40008EA")]
	Nothing = 0,
	[Token(Token = "0x40008EB")]
	Blend = 1,
	[Token(Token = "0x40008EC")]
	Raster = 2,
	[Token(Token = "0x40008ED")]
	Depth = 4,
	[Token(Token = "0x40008EE")]
	Stencil = 8,
	[Token(Token = "0x40008EF")]
	Everything = 0xF
}
