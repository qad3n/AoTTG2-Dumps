// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.TextureCreationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x20003F7")]
[Flags]
public enum TextureCreationFlags
{
	[Token(Token = "0x4000D31")]
	None = 0,
	[Token(Token = "0x4000D32")]
	MipChain = 1,
	[Token(Token = "0x4000D33")]
	DontInitializePixels = 4,
	[Token(Token = "0x4000D34")]
	Crunch = 0x40,
	[Token(Token = "0x4000D35")]
	DontUploadUponCreate = 0x400,
	[Token(Token = "0x4000D36")]
	[Obsolete("IgnoreMipmapLimit flag is no longer used since this is now the default behavior for all Texture shapes. Please provide mipmap limit information using a MipmapLimitDescriptor argument.", false)]
	[ExcludeFromDocs]
	IgnoreMipmapLimit = 0x800
}
