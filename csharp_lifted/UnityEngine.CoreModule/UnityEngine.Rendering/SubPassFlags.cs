// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SubPassFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200036E")]
[Flags]
public enum SubPassFlags
{
	[Token(Token = "0x40009F5")]
	None = 0,
	[Token(Token = "0x40009F6")]
	ReadOnlyDepth = 2,
	[Token(Token = "0x40009F7")]
	ReadOnlyStencil = 4,
	[Token(Token = "0x40009F8")]
	ReadOnlyDepthStencil = ReadOnlyDepth | ReadOnlyStencil,
	[Token(Token = "0x40009F9")]
	UseShadingRateImage = 8,
	[Token(Token = "0x40009FA")]
	TileProperties = 0x10,
	[Token(Token = "0x40009FB")]
	MultiviewRenderRegionsCompatible = 0x20
}
