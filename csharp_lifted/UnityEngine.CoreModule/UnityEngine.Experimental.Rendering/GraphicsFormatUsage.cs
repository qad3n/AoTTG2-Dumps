// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.GraphicsFormatUsage
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x4000D45")]
	None = 0,
	[Token(Token = "0x4000D46")]
	Sample = 1,
	[Token(Token = "0x4000D47")]
	Linear = 2,
	[Token(Token = "0x4000D48")]
	Sparse = 4,
	[Token(Token = "0x4000D49")]
	Render = 0x10,
	[Token(Token = "0x4000D4A")]
	Blend = 0x20,
	[Token(Token = "0x4000D4B")]
	GetPixels = 0x40,
	[Token(Token = "0x4000D4C")]
	SetPixels = 0x80,
	[Token(Token = "0x4000D4D")]
	SetPixels32 = 0x100,
	[Token(Token = "0x4000D4E")]
	ReadPixels = 0x200,
	[Token(Token = "0x4000D4F")]
	LoadStore = 0x400,
	[Token(Token = "0x4000D50")]
	MSAA2x = 0x800,
	[Token(Token = "0x4000D51")]
	MSAA4x = 0x1000,
	[Token(Token = "0x4000D52")]
	MSAA8x = 0x2000,
	[Token(Token = "0x4000D53")]
	StencilSampling = 0x10000
}
