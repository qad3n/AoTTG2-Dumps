using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002BF")]
[Flags]
public enum CopyTextureSupport
{
	[Token(Token = "0x40007DD")]
	None = 0,
	[Token(Token = "0x40007DE")]
	Basic = 1,
	[Token(Token = "0x40007DF")]
	Copy3D = 2,
	[Token(Token = "0x40007E0")]
	DifferentTypes = 4,
	[Token(Token = "0x40007E1")]
	TextureToRT = 8,
	[Token(Token = "0x40007E2")]
	RTToTexture = 0x10
}
