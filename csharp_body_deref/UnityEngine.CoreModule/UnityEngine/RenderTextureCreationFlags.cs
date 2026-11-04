// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTextureCreationFlags
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000110")]
[Flags]
public enum RenderTextureCreationFlags
{
	[Token(Token = "0x400035C")]
	MipMap = 1,
	[Token(Token = "0x400035D")]
	AutoGenerateMips = 2,
	[Token(Token = "0x400035E")]
	SRGB = 4,
	[Token(Token = "0x400035F")]
	EyeTexture = 8,
	[Token(Token = "0x4000360")]
	EnableRandomWrite = 0x10,
	[Token(Token = "0x4000361")]
	CreatedFromScript = 0x20,
	[Token(Token = "0x4000362")]
	AllowVerticalFlip = 0x80,
	[Token(Token = "0x4000363")]
	NoResolvedColorSurface = 0x100,
	[Token(Token = "0x4000364")]
	DynamicallyScalable = 0x400,
	[Token(Token = "0x4000365")]
	BindMS = 0x800,
	[Token(Token = "0x4000366")]
	ShadingRate = 0x4000,
	[Token(Token = "0x4000367")]
	DynamicallyScalableExplicit = 0x20000
}
