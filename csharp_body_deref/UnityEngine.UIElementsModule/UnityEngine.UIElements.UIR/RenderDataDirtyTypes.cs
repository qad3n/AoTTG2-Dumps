// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderDataDirtyTypes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004C1")]
[Flags]
internal enum RenderDataDirtyTypes
{
	[Token(Token = "0x4000F28")]
	None = 0,
	[Token(Token = "0x4000F29")]
	Transform = 1,
	[Token(Token = "0x4000F2A")]
	ClipRectSize = 2,
	[Token(Token = "0x4000F2B")]
	Clipping = 4,
	[Token(Token = "0x4000F2C")]
	ClippingHierarchy = 8,
	[Token(Token = "0x4000F2D")]
	Visuals = 0x10,
	[Token(Token = "0x4000F2E")]
	VisualsHierarchy = 0x20,
	[Token(Token = "0x4000F2F")]
	VisualsOpacityId = 0x40,
	[Token(Token = "0x4000F30")]
	Opacity = 0x80,
	[Token(Token = "0x4000F31")]
	OpacityHierarchy = 0x100,
	[Token(Token = "0x4000F32")]
	Color = 0x200,
	[Token(Token = "0x4000F33")]
	AllVisuals = 0x70
}
