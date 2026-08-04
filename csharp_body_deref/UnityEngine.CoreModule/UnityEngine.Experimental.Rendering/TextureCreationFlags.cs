// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.TextureCreationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000350")]
[Flags]
public enum TextureCreationFlags
{
	[Token(Token = "0x4000AAA")]
	None = 0,
	[Token(Token = "0x4000AAB")]
	MipChain = 1,
	[Token(Token = "0x4000AAC")]
	DontInitializePixels = 4,
	[Token(Token = "0x4000AAD")]
	Crunch = 0x40,
	[Token(Token = "0x4000AAE")]
	DontUploadUponCreate = 0x400,
	[Token(Token = "0x4000AAF")]
	IgnoreMipmapLimit = 0x800
}
