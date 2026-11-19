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

[Token(Token = "0x20005A1")]
[Flags]
internal enum RenderDataDirtyTypes
{
	[Token(Token = "0x40013D9")]
	None = 0,
	[Token(Token = "0x40013DA")]
	Transform = 1,
	[Token(Token = "0x40013DB")]
	ClipRectSize = 2,
	[Token(Token = "0x40013DC")]
	Clipping = 4,
	[Token(Token = "0x40013DD")]
	ClippingHierarchy = 8,
	[Token(Token = "0x40013DE")]
	Visuals = 0x10,
	[Token(Token = "0x40013DF")]
	VisualsHierarchy = 0x20,
	[Token(Token = "0x40013E0")]
	VisualsOpacityId = 0x40,
	[Token(Token = "0x40013E1")]
	Opacity = 0x80,
	[Token(Token = "0x40013E2")]
	OpacityHierarchy = 0x100,
	[Token(Token = "0x40013E3")]
	Color = 0x200,
	[Token(Token = "0x40013E4")]
	AllVisuals = Visuals | VisualsHierarchy | VisualsOpacityId
}
