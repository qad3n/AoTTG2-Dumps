// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SubPassFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039A")]
[Flags]
public enum SubPassFlags
{
	[Token(Token = "0x4000B15")]
	None = 0,
	[Token(Token = "0x4000B16")]
	ReadOnlyDepth = 2,
	[Token(Token = "0x4000B17")]
	ReadOnlyStencil = 4,
	[Token(Token = "0x4000B18")]
	ReadOnlyDepthStencil = ReadOnlyDepth | ReadOnlyStencil,
	[Token(Token = "0x4000B19")]
	UseShadingRateImage = 8,
	[Token(Token = "0x4000B1A")]
	TileProperties = 0x10,
	[Token(Token = "0x4000B1B")]
	MultiviewRenderRegionsCompatible = 0x20
}
