// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTClearFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000343")]
[Flags]
public enum RTClearFlags
{
	[Token(Token = "0x4000941")]
	None = 0,
	[Token(Token = "0x4000942")]
	Color = 1,
	[Token(Token = "0x4000943")]
	Depth = 2,
	[Token(Token = "0x4000944")]
	Stencil = 4,
	[Token(Token = "0x4000945")]
	All = Color | Depth | Stencil,
	[Token(Token = "0x4000946")]
	DepthStencil = 6,
	[Token(Token = "0x4000947")]
	ColorDepth = 3,
	[Token(Token = "0x4000948")]
	ColorStencil = 5,
	[Token(Token = "0x4000949")]
	Color0 = 8,
	[Token(Token = "0x400094A")]
	Color1 = 0x10,
	[Token(Token = "0x400094B")]
	Color2 = 0x20,
	[Token(Token = "0x400094C")]
	Color3 = 0x40,
	[Token(Token = "0x400094D")]
	Color4 = 0x80,
	[Token(Token = "0x400094E")]
	Color5 = 0x100,
	[Token(Token = "0x400094F")]
	Color6 = 0x200,
	[Token(Token = "0x4000950")]
	Color7 = 0x400
}
