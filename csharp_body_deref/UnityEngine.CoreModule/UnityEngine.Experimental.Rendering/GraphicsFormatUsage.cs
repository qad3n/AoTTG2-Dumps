// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.GraphicsFormatUsage
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x20003F9")]
[Flags]
public enum GraphicsFormatUsage
{
	[Token(Token = "0x4000D47")]
	None = 0,
	[Token(Token = "0x4000D48")]
	Sample = 1,
	[Token(Token = "0x4000D49")]
	Linear = 2,
	[Token(Token = "0x4000D4A")]
	Sparse = 4,
	[Token(Token = "0x4000D4B")]
	Render = 0x10,
	[Token(Token = "0x4000D4C")]
	Blend = 0x20,
	[Token(Token = "0x4000D4D")]
	GetPixels = 0x40,
	[Token(Token = "0x4000D4E")]
	SetPixels = 0x80,
	[Token(Token = "0x4000D4F")]
	SetPixels32 = 0x100,
	[Token(Token = "0x4000D50")]
	ReadPixels = 0x200,
	[Token(Token = "0x4000D51")]
	LoadStore = 0x400,
	[Token(Token = "0x4000D52")]
	MSAA2x = 0x800,
	[Token(Token = "0x4000D53")]
	MSAA4x = 0x1000,
	[Token(Token = "0x4000D54")]
	MSAA8x = 0x2000,
	[Token(Token = "0x4000D55")]
	StencilSampling = 0x10000
}
