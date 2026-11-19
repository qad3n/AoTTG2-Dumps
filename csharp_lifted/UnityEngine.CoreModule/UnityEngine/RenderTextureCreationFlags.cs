// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTextureCreationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000111")]
[Flags]
public enum RenderTextureCreationFlags
{
	[Token(Token = "0x4000361")]
	MipMap = 1,
	[Token(Token = "0x4000362")]
	AutoGenerateMips = 2,
	[Token(Token = "0x4000363")]
	SRGB = 4,
	[Token(Token = "0x4000364")]
	EyeTexture = 8,
	[Token(Token = "0x4000365")]
	EnableRandomWrite = 0x10,
	[Token(Token = "0x4000366")]
	CreatedFromScript = 0x20,
	[Token(Token = "0x4000367")]
	AllowVerticalFlip = 0x80,
	[Token(Token = "0x4000368")]
	NoResolvedColorSurface = 0x100,
	[Token(Token = "0x4000369")]
	DynamicallyScalable = 0x400,
	[Token(Token = "0x400036A")]
	BindMS = 0x800,
	[Token(Token = "0x400036B")]
	ShadingRate = 0x4000,
	[Token(Token = "0x400036C")]
	DynamicallyScalableExplicit = 0x20000
}
