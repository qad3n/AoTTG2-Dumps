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

[Token(Token = "0x20005B6")]
[Flags]
internal enum RenderDataDirtyTypes
{
	[Token(Token = "0x4001497")]
	None = 0,
	[Token(Token = "0x4001498")]
	Transform = 1,
	[Token(Token = "0x4001499")]
	ClipRectSize = 2,
	[Token(Token = "0x400149A")]
	Clipping = 4,
	[Token(Token = "0x400149B")]
	ClippingHierarchy = 8,
	[Token(Token = "0x400149C")]
	Visuals = 0x10,
	[Token(Token = "0x400149D")]
	VisualsHierarchy = 0x20,
	[Token(Token = "0x400149E")]
	VisualsOpacityId = 0x40,
	[Token(Token = "0x400149F")]
	Opacity = 0x80,
	[Token(Token = "0x40014A0")]
	OpacityHierarchy = 0x100,
	[Token(Token = "0x40014A1")]
	Color = 0x200,
	[Token(Token = "0x40014A2")]
	AllVisuals = Visuals | VisualsHierarchy | VisualsOpacityId
}
