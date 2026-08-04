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

[Token(Token = "0x20000EF")]
[Flags]
public enum RenderTextureCreationFlags
{
	[Token(Token = "0x4000313")]
	MipMap = 1,
	[Token(Token = "0x4000314")]
	AutoGenerateMips = 2,
	[Token(Token = "0x4000315")]
	SRGB = 4,
	[Token(Token = "0x4000316")]
	EyeTexture = 8,
	[Token(Token = "0x4000317")]
	EnableRandomWrite = 0x10,
	[Token(Token = "0x4000318")]
	CreatedFromScript = 0x20,
	[Token(Token = "0x4000319")]
	AllowVerticalFlip = 0x80,
	[Token(Token = "0x400031A")]
	NoResolvedColorSurface = 0x100,
	[Token(Token = "0x400031B")]
	DynamicallyScalable = 0x400,
	[Token(Token = "0x400031C")]
	BindMS = 0x800
}
