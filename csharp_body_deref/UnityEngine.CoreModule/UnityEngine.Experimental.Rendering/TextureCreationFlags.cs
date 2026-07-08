using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200034D")]
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
