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

[Token(Token = "0x20003C1")]
[Flags]
public enum RenderStateMask
{
	[Token(Token = "0x4000C04")]
	Nothing = 0,
	[Token(Token = "0x4000C05")]
	Blend = 1,
	[Token(Token = "0x4000C06")]
	Raster = 2,
	[Token(Token = "0x4000C07")]
	Depth = 4,
	[Token(Token = "0x4000C08")]
	Stencil = 8,
	[Token(Token = "0x4000C09")]
	Everything = Blend | Raster | Depth | Stencil
}
